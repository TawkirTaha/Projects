using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Data.SqlClient;
using System.Drawing;
using System.Linq;
using System.Security.Policy;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using static System.Windows.Forms.VisualStyles.VisualStyleElement;

namespace SuperMarket
{
    public partial class SellingForm : Form
    {
        public SellingForm()
        {
            InitializeComponent();
        }

        SqlConnection connection = new SqlConnection(@"Data Source=laptop-9ftus278;Initial Catalog=SuperMarketDb;Persist Security Info=True;User ID=sa;Password=sadikc#24");

        private void fillCombo()
        {
            Con.Open();
            SqlCommand cmd = new SqlCommand("select CatName from CategoryTbl", Con);
            SqlDataReader rdr;
            rdr = cmd.ExecuteReader();
            DataTable dt = new DataTable();
            dt.Columns.Add("CatName", typeof(string));
            dt.Load(rdr);
            cbSelling.ValueMember = "CatName";
            cbSelling.DataSource = dt;
            Con.Close();

        }
   

        private void label4_Click(object sender, EventArgs e)
        {

        }

        private void SellingForm_Load(object sender, EventArgs e)
        {

        }

        private void btnSelling_Click(object sender, EventArgs e)
        {
            this.Show();
        }

        private void btnSellsRecord_Click(object sender, EventArgs e)
        {
            SellerSellsRecordForm sellerSellsRecordForm = new SellerSellsRecordForm();
            sellerSellsRecordForm.Show();
            this.Hide();
        }

        private void btnNotice_Click(object sender, EventArgs e)
        {
            SellerNoticeBoardForm sellerNoticeBoardForm = new SellerNoticeBoardForm();
            sellerNoticeBoardForm.Show();
            this.Hide();
        }

        private void btnLogout_Click(object sender, EventArgs e)
        {
            LoginForm loginForm = new LoginForm();
            loginForm.Show();
            this.Hide();
        }

        private void cbQty_SelectedIndexChanged(object sender, EventArgs e)
        {
            if (cbQty.SelectedItem != null)
            {
                tbQty.Text = cbQty.SelectedItem.ToString();
            }
        }


        private void cbSelling_SelectionChangeCommitted(object sender, EventArgs e)
        {
            Con.Open();
            String query = "select ProdName,ProdPrice,ProdQty from ProductTbl where prodCat='" + cbSelling.SelectedValue.ToString() + "'";
            SqlDataAdapter sda = new SqlDataAdapter(query, Con);
            SqlCommandBuilder builder = new SqlCommandBuilder(sda);
            var ds = new DataSet();
            sda.Fill(ds);
            dgvProduct.DataSource = ds.Tables[0];
            Con.Close();
        }

        int n = 0;
        int GridTotal = 0;
       

        private void btnAddtoCart_Click(object sender, EventArgs e)
        {
            if (tbProdName.Text == "" || tbQty.Text == "")
            {
                MessageBox.Show("Missing Data");
            }
            else
            {

                int total = Convert.ToInt32(tbPrice.Text) * Convert.ToInt32(tbQty.Text);
                DataGridViewRow newRow = new DataGridViewRow();
                newRow.CreateCells(OrderDGV);
                newRow.Cells[0].Value = n + 1;
                newRow.Cells[1].Value = tbProdName.Text;
                newRow.Cells[2].Value = tbPrice.Text;
                newRow.Cells[3].Value = tbQty.Text;
                newRow.Cells[4].Value = Convert.ToInt32(tbPrice.Text) * Convert.ToInt32(tbQty.Text);
                OrderDGV.Rows.Add(newRow);
                n++;
                GridTotal = GridTotal + total;
                Amountlbl.Text = "" + GridTotal;
                tbAvailableQty.Text = "";

                tbPrice.Text = "";
                cbQty.Enabled = false;
                btnDone.Enabled = true;
                btnReset.Enabled = true;
                UpdateField();
                FillData();
                tbQty.Text = "";

            }
          
        }

        private void FillData()
        {

            Con.Open();
            string query = "select ProdName,ProdPrice,ProdQty from ProductTbl";
            SqlDataAdapter sda = new SqlDataAdapter(query, Con);
            SqlCommandBuilder builder = new SqlCommandBuilder(sda);
            var ds = new DataSet();
            sda.Fill(ds);
            dgvProduct.DataSource = ds.Tables[0];
            Con.Close();

        }

        private void UpdateField()
        {
            int selectedQuantity = int.Parse(tbQty.Text);
            Con.Open();
            string query = "update ProductTbl set prodQty= (ProdQty-" + selectedQuantity + ")  where prodName='" + tbProdName.Text + "'";
            SqlCommand cmd = new SqlCommand(query, Con);
            cmd.ExecuteNonQuery();
            Con.Close();
        }

        private void FillDataBills()
        {
            Con.Open();
            string query = "select * from BillTbl";
            SqlDataAdapter sda = new SqlDataAdapter(query, Con);
            SqlCommandBuilder builder = new SqlCommandBuilder(sda);
            var ds = new DataSet();
            sda.Fill(ds);
            dgvSellsList.DataSource = ds.Tables[0];
            Con.Close();
        }

        private void SellingForm_Load(object sender, EventArgs e)
        {
            FillData();
            FillDataBills();
            fillCombo();

            lblSellerName.Text = "" + LoginForm.Sellername;
            lblAmount.Text = "Amount to pay : ";

            cbQty.SelectedIndexChanged += cbQty_SelectedIndexChanged;
        }



        private void dataGridView1_CellContentClick(object sender, DataGridViewCellEventArgs e)
        {
            cbQty.Enabled = true;
            tbProdName.Text = dgvProduct.SelectedRows[0].Cells[0].Value.ToString();
            tbPrice.Text = dgvProduct.SelectedRows[0].Cells[1].Value.ToString();
            tbAvailableQty.Text = dgvProduct.SelectedRows[0].Cells[2].Value.ToString();

            int prodQty = Convert.ToInt32(dgvProduct.SelectedRows[0].Cells[2].Value);
            cbQty.Items.Clear();
            for (int i = 1; i <= prodQty; i++)
            {
                cbQty.Items.Add(i);
            }

            cbQty.SelectedValue = tbQty.Text;
        }

        private void btnReset_Click(object sender, EventArgs e)
        {
            OrderDGV.Rows.Clear();
            tbProdName.Text = "";
            tbQty.Text = "";
            tbPrice.Text = "";
            tbAvailableQty.Text = "";
        }

        private void btnDone_Click(object sender, EventArgs e)
        {
            Random random = new Random();
            int billId = random.Next(100, 100000000);
            tbBillId.Text = billId.ToString();

            try
            {
                Con.Open();
                String query = "insert into BillTbl values(" + tbBillId.Text + ",'" + lblSellerName.Text + "','" + lblDate.Text + "','" + Amountlbl.Text + "')";
                SqlCommand cmd = new SqlCommand(query, Con);
                cmd.ExecuteNonQuery();
                MessageBox.Show("Order Added Successfully");

                Con.Close();
                FillDataBills();
                OrderDGV.Rows.Clear();
                tbBillId.Text = "";
                btnReset.Enabled = false;


            }
            catch (Exception ex)
            {
                MessageBox.Show(ex.Message);
            }
            
        }

        private void btn_Paint(object sender, PaintEventArgs e)
        {
            private void FillDataBills()
            {
                Con.Open();
                string query = "select * from BillTbl";
                SqlDataAdapter sda = new SqlDataAdapter(query, Con);
                SqlCommandBuilder builder = new SqlCommandBuilder(sda);
                var ds = new DataSet();
                sda.Fill(ds);
                dgvSellsList.DataSource = ds.Tables[0];
                Con.Close();
            }

            private void SellingForm_Load(object sender, EventArgs e)
            {
                FillData();
                FillDataBills();
                fillCombo();

                lblSellerName.Text = "" + LoginForm.Sellername;
                lblAmount.Text = "Amount to pay : ";

                cbQty.SelectedIndexChanged += cbQty_SelectedIndexChanged;
            }
        }

        private void cbQty_SelectedIndexChanged(object sender, EventArgs e)
        {
            if (cbQty.SelectedItem != null)
            {
                tbQty.Text = cbQty.SelectedItem.ToString();
            }
        }

        private void btnQtyPlus_Click(object sender, EventArgs e)
        {
            if (cbQty.SelectedIndex < cbQty.Items.Count - 1)
            {
                cbQty.SelectedIndex++;
            }
        }

        private void btnQtyMinus_Click(object sender, EventArgs e)
        {
            {
                if (cbQty.SelectedIndex > 0)
                {
                    cbQty.SelectedIndex--;
                }
            }
        }

        private void panel2_Paint(object sender, PaintEventArgs e)
        {
            lblDate.Text = DateTime.Today.Day.ToString() + "/" + DateTime.Today.Month.ToString() + "/" + DateTime.Today.Year.ToString();
        }
    }

}


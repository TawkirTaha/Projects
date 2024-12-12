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
    public partial class ProductForm : Form
    {
        public ProductForm()
        {
            InitializeComponent();
        }
        SqlConnection connection = new SqlConnection(@"Data Source=laptop-9ftus278;Initial Catalog=SuperMarketDb;Persist Security Info=True;User ID=sa;Password=sadikc#24");

        private void ProductForm_Load(object sender, EventArgs e)
        {

        }

        private void cbCatSelection_Paint(object sender, PaintEventArgs e)
        {

        }

        private void btnSeller_Click(object sender, EventArgs e)
        {
            SellerForm sellerForm = new SellerForm();
            sellerForm.Show();
            this.Hide();
        }

        private void btnProduct_Click(object sender, EventArgs e)
        {
            this.Show();
        }

        private void btnCategory_Click(object sender, EventArgs e)
        {
            CategoryForm categoryFrom = new CategoryForm();
            categoryFrom.Show();
            this.Hide();
        }

        private void btnRecord_Click(object sender, EventArgs e)
        {
            SellsRecordForm sellsRecordForm = new SellsRecordForm();
            sellsRecordForm.Show();
            this.Hide();
        }

        private void btnNotice_Click(object sender, EventArgs e)
        {
            AdminNotice adminNotice = new AdminNotice();
            adminNotice.Show();
            this.Hide();
        }

        private void btnLogout_Click(object sender, EventArgs e)
        {
            LoginForm loginForm = new LoginForm();
            loginForm.Show();
            this.Hide();
        }

        private void label3_Click(object sender, EventArgs e)
        {

        }

        private void label1_Click(object sender, EventArgs e)
        {

        }

        private void btnAdd_Click(object sender, EventArgs e)
        {
            Random random = new Random();
            int billId = random.Next(50, 100000000);
            tbId.Text = billId.ToString();
            try
            {
                if (tbId.Text == "" || tbName.Text == "" || tbQty.Text == "" || tbPrice.Text == "" || cbCatSelection.Text == "")
                {
                    MessageBox.Show("Missing Information");
                }
                else
                {
                    Con.Open();
                    String query = "insert into ProductTbl values(" + tbId.Text + ",'" + tbName.Text + "','" + tbQty.Text + "','" + tbPrice.Text + "','" + cbCatSelection.SelectedValue.ToString() + "')";
                    SqlCommand cmd = new SqlCommand(query, Con);
                    cmd.ExecuteNonQuery();
                    MessageBox.Show("Product Added Successfully");
                    Con.Close();

                    Filldata();
                    tbName.Text = "";
                    tbId.Text = "Automated";
                    tbPrice.Text = "";
                    tbQty.Text = "";
                }
            }
            catch (Exception ex)
            {
                MessageBox.Show(ex.Message);
            }
        }

        private void btnEdit_Click(object sender, EventArgs e)
        {
            try
            {
                if (tbId.Text == "" || tbName.Text == "" || tbQty.Text == "" || tbPrice.Text == "" || cbCatSelection.Text == "")
                {
                    MessageBox.Show("Missing Information");
                }
                else
                {
                    Con.Open();
                    string query = "update ProductTbl set ProdName='" + tbName.Text + "',ProdQty='" + tbQty.Text + "',ProdPrice='" + tbPrice.Text + "',ProdCat='" + cbCatSelection.Text + "' where ProdId=" + tbId.Text + ";";
                    SqlCommand cmd = new SqlCommand(query, Con);
                    cmd.ExecuteNonQuery();
                    MessageBox.Show("Product Details Updated");
                    Con.Close();
                    Filldata();
                    tbName.Text = "";
                    tbId.Text = "";
                    tbPrice.Text = "";
                    tbQty.Text = "";
                }
            }
            catch (Exception ex)
            {
                MessageBox.Show(ex.Message);
            }
        }

        private void btnDelete_Click(object sender, EventArgs e)
        {
            try
            {
                if (tbId.Text == "")
                {
                    MessageBox.Show("Select The Product to Delete");
                }
                else
                {
                    Con.Open();
                    String query = "delete from ProductTbl where ProdId=" + tbId.Text + "";
                    SqlCommand cmd = new SqlCommand(query, Con);
                    cmd.ExecuteNonQuery();
                    MessageBox.Show("Product Deleted Successfully");
                    Con.Close();
                    Filldata();
                }
            }
            catch (Exception ex)
            {
                MessageBox.Show(ex.Message);
            }
        }

        private void btnRefresh_Click(object sender, EventArgs e)
        {
            try
            {
                Con.Close();
                tbId.Clear();
                tbName.Clear();
                tbQty.Clear();
                tbPrice.Clear();
                Filldata();
            }
            catch (Exception ex)
            {
                MessageBox.Show(ex.Message);
            }
        }

        private void dataGridView1_CellContentClick(object sender, DataGridViewCellEventArgs e)
        {
            tbId.Text = dgvProduct.SelectedRows[0].Cells[0].Value.ToString();
            tbName.Text = dgvProduct.SelectedRows[0].Cells[1].Value.ToString();
            tbQty.Text = dgvProduct.SelectedRows[0].Cells[2].Value.ToString();
            tbPrice.Text = dgvProduct.SelectedRows[0].Cells[3].Value.ToString();
            cbCatSelection.Text = dgvProduct.SelectedRows[0].Cells[4].Value.ToString();
           
        }
        private void FillCombo()
        {
            Con.Open();
            SqlCommand cmd = new SqlCommand("select CatName from CategoryTbl", Con);
            SqlDataReader rdr;
            rdr = cmd.ExecuteReader();
            DataTable dt = new DataTable();
            dt.Columns.Add("CatName", typeof(string));
            dt.Load(rdr);
            cbCatSelection.ValueMember = "CatName";
            cbCatSelection.DataSource = dt;
            cbCategory.ValueMember = "CatName";
            cbCategory.DataSource = dt;
            Con.Close();
        }
        private void Filldata()
        {
            Con.Open();
            string query = "select * from ProductTbl";
            SqlDataAdapter sda = new SqlDataAdapter(query, Con);
            SqlCommandBuilder builder = new SqlCommandBuilder(sda);
            var ds = new DataSet();
            sda.Fill(ds);
            dgvProduct.DataSource = ds.Tables[0];
            Con.Close();
        }
        private void ProductForm_Load(object sender, EventArgs e)
        {
            FillCombo();
            Filldata();
        }
        private void cbCategory_SelectionChangeCommitted(object sender, EventArgs e)
        {

            Con.Open();
            String query = "select * from ProductTbl where prodCat='" + cbCategory.SelectedValue.ToString() + "'";
            SqlDataAdapter sda = new SqlDataAdapter(query, Con);
            SqlCommandBuilder builder = new SqlCommandBuilder(sda);
            var ds = new DataSet();
            sda.Fill(ds);
            dgvProduct.DataSource = ds.Tables[0];
            Con.Close(); 
        }
       
    }
}


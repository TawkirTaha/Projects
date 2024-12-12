using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Data.SqlClient;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace SuperMarket
{
    public partial class AdminNotice : Form
    {
        public AdminNotice()
        {
            InitializeComponent();
        }

        SqlConnection connection = new SqlConnection(@"Data Source=laptop-9ftus278;Initial Catalog=SuperMarketDb;Persist Security Info=True;User ID=sa;Password=sadikc#24");

        private void AdminNotice_Load(object sender, EventArgs e)
        {

        }

        private void Filldata()
        {
            Con.Close();
            Con.Open();
            string query = "select * from AdminNotice";
            SqlDataAdapter sda = new SqlDataAdapter(query, Con);
            SqlCommandBuilder builder = new SqlCommandBuilder(sda);
            var ds = new DataSet();
            sda.Fill(ds);
            dgvAdminNotice.DataSource = ds.Tables[0];
            Con.Close();
        }

        private void btnSeller_Click(object sender, EventArgs e)
        {
           
            SellerForm sellerForm = new SellerForm();
            sellerForm.Show();
            this.Hide();
        }

        private void btnProduct_Click(object sender, EventArgs e)
        {
            ProductForm prodForm = new ProductForm();
            prodForm.Show();
            this.Hide();
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
            this.Show();
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

        private void tbId_TextChanged(object sender, EventArgs e)
        {

        }

        private void dgvAdminNotice_CellContentClick(object sender, DataGridViewCellEventArgs e)
        {
            tbId.Text = dgvAdminNotice.SelectedRows[0].Cells[0].Value.ToString();
            tbName.Text = dgvAdminNotice.SelectedRows[0].Cells[1].Value.ToString();
            tbId.Enabled = false;
        }

        private void btnPublish_Click(object sender, EventArgs e)
        {
            try
            {
                if (tbId.Text == "" || tbName.Text == "")
                {
                    MessageBox.Show("Missing Information");
                }
                else
                {
                    Con.Open();
                    String query = "insert into AdminNotice values('" + tbId.Text + "','" + tbName.Text + "')";
                    SqlCommand cmd = new SqlCommand(query, Con);
                    cmd.ExecuteNonQuery();
                    MessageBox.Show("Notice Published Successfully.");
                    Con.Close();
                    Filldata();
                    tbId.Text = "";
                    tbName.Text = "";
                    Filldata();

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
                    MessageBox.Show("Select The Notice to Delete");
                }
                else
                {
                    Con.Open();
                    String query = "delete from AdminNotice where NoticeId='" + tbId.Text + "'";
                    SqlCommand cmd = new SqlCommand(query, Con);
                    cmd.ExecuteNonQuery();
                    MessageBox.Show("Notice Deleted Successfully");
                    Con.Close();
                    Filldata();
                }
            }
            catch (Exception ex)
            {
                MessageBox.Show(ex.Message);
            }
        }
    }
}

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
    public partial class SellsRecordForm : Form
    {
        public SellsRecordForm()
        {
            InitializeComponent();
        }
        SqlConnection connection = new SqlConnection(@"Data Source=laptop-9ftus278;Initial Catalog=SuperMarketDb;Persist Security Info=True;User ID=sa;Password=sadikc#24");


        private void FilldataBills()
        {
            Con.Open();
            string query = "select * from BillTbl";
            SqlDataAdapter sda = new SqlDataAdapter(query, Con);
            SqlCommandBuilder builder = new SqlCommandBuilder(sda);
            var ds = new DataSet();
            sda.Fill(ds);
            dgvHistory.DataSource = ds.Tables[0];
            Con.Close();
        }

        private void pbRefresh_Click(object sender, EventArgs e)
        {
            tbSearch.Text = "";
            tbBillId.Text = "";
        }

        private void SellsRecordForm_Load(object sender, EventArgs e)
        {
            FilldataBills();
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
            this.Show();
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

        private void btnSearch_Click(object sender, EventArgs e)
        {
            int billId = int.Parse(tbSearch.Text);
            try
            {
                if (billId.ToString() == "")
                {
                    MessageBox.Show("Missing Information");
                }
                else
                {

                    Con.Open();
                    string query = "SELECT COUNT(*) FROM BillTbl WHERE BillId = @BillId";
                    SqlCommand cmd = new SqlCommand(query, Con);
                    cmd.Parameters.AddWithValue("@BillId", billId);
                    int count = (int)cmd.ExecuteScalar();
                    if (count > 0)
                    {
                        tbBillId.Text = billId.ToString();
                    }
                    else
                    {
                        MessageBox.Show("Invalid BillID. Please enter a valid BillID.");
                    }
                }
            }
            catch (Exception ex)
            {
                MessageBox.Show(ex.Message);
            }
            finally
            {
                Con.Close();
            }
            
        }

        private void btnDelete_Click(object sender, EventArgs e)
        {
            try
            {
                if (tbBillId.Text == "")
                {
                    MessageBox.Show("Select The Order to Delete");
                }
                else
                {
                    Con.Open();
                    String query = "delete from BillTbl where BillId=" + tbBillId.Text + "";
                    SqlCommand cmd = new SqlCommand(query, Con);
                    cmd.ExecuteNonQuery();
                    MessageBox.Show("Order Deleted From History");
                    Con.Close();
                    tbBillId.Text = "";
                    FilldataBills();
                }
            }
            catch (Exception ex)
            {
                MessageBox.Show(ex.Message);
            }
           
        }

        private void dataGridView1_CellContentClick(object sender, DataGridViewCellEventArgs e)
        {
            tbBillId.Text = dgvHistory.SelectedRows[0].Cells[0].Value.ToString();
        }
    }
}

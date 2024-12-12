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
    public partial class SellerForm : Form
    {
        public SellerForm()
        {
            InitializeComponent();
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

        private void btnAdd_Click(object sender, EventArgs e)
        {
            try
            {
                if (tbId.Text == "" || SName.Text == "" || SAge.Text == "" || Sphone.Text == "" || tbPassword.Text == "")
                {
                    MessageBox.Show("Missing Information");
                }
                else
                {
                    Con.Open();
                    String query = "insert into SellersTbl values('" + tbId.Text + "','" + SName.Text + "','" + SAge.Text + "','" + Sphone.Text + "','" + tbPassword.Text + "')";
                    SqlCommand cmd = new SqlCommand(query, Con);
                    cmd.ExecuteNonQuery();
                    MessageBox.Show("Seller Added Successfully.");


                    Con.Close();
                    Filldata();
                    tbId.Text = "";
                    SName.Text = "";
                    SAge.Text = "";
                    Sphone.Text = "";
                    tbPassword.Text = "";
                    Filldata();

                }
            }
            catch (Exception ex)
            {
                MessageBox.Show(ex.Message);
            }
        }
        SqlConnection connection = new SqlConnection(@"Data Source=laptop-9ftus278;Initial Catalog=SuperMarketDb;Persist Security Info=True;User ID=sa;Password=sadikc#24 ")

        private void tbId_KeyPress(object sender, KeyPressEventArgs e)
        {

            if (!char.IsLower(e.KeyChar) && !char.IsDigit(e.KeyChar) && e.KeyChar != '\b')
            {
                e.Handled = true;
                epUsername.SetError(tbId, "Username can contain only lowercase letters and numbers");
            }
            else
            {
                epUsername.SetError(tbId, "");
            }
        }

        private void btnEdit_Click(object sender, EventArgs e)
        {
            try
            {
                if (tbId.Text == "" || SName.Text == "" || SAge.Text == "" || Sphone.Text == "" || tbPassword.Text == "")
                {
                    MessageBox.Show("Missing Information");
                }
                else
                {
                    Con.Open();
                    string query = "update SellersTbl set SellerName='" + SName.Text + "',SellerAge='" + SAge.Text + "',SellerPhone='" + Sphone.Text + "',SellerPass='" + tbPassword.Text  + "' where SellerId='" + tbId.Text + "';";
                    SqlCommand cmd = new SqlCommand(query, Con);
                    cmd.Parameters.AddWithValue("@SellerId", tbId.Text);
                    cmd.ExecuteNonQuery();
                    MessageBox.Show("Seller Account Updated");
                    Filldata();
                    Con.Close();
                    tbId.Text = "";
                    SName.Text = "";
                    SAge.Text = "";
                    Sphone.Text = "";
                    tbPassword.Text = "";
                    // Filldata();
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
                    MessageBox.Show("Select The Seller to Delete");
                }
                else
                {
                    Con.Open();
                    String query = "delete from SellersTbl where SellerId='" + tbId.Text + "'";
                    SqlCommand cmd = new SqlCommand(query, Con);
                    cmd.ExecuteNonQuery();
                    MessageBox.Show("Seller Deleted Successfully");
                    Con.Close();
                    Filldata();
                }
            }
            catch (Exception ex)
            {
                MessageBox.Show(ex.Message);
            }
        }

        private void btnRef_Click(object sender, EventArgs e)
        {
            try
            {
                Con.Close();
                tbId.Clear();
                SName.Clear();
                SAge.Clear();
                Sphone.Clear();
                tbPassword.Clear();
                Filldata();
            }
            catch (Exception ex)
            {
                MessageBox.Show(ex.Message);
            }
        }

        private void dataGridView1_CellContentClick(object sender, DataGridViewCellEventArgs e)
        {
            tbId.Text = dgvSeller.SelectedRows[0].Cells[0].Value.ToString();
            SName.Text = dgvSeller.SelectedRows[0].Cells[1].Value.ToString();
            SAge.Text = dgvSeller.SelectedRows[0].Cells[2].Value.ToString();
            Sphone.Text = dgvSeller.SelectedRows[0].Cells[3].Value.ToString();
            tbPassword.Text = dgvSeller.SelectedRows[0].Cells[4].Value.ToString();
            tbId.Enabled = false;
        }
        private void Filldata()
        {
            Con.Close();
            Con.Open();
            string query = "select * from SellersTbl";
            SqlDataAdapter sda = new SqlDataAdapter(query, Con);
            SqlCommandBuilder builder = new SqlCommandBuilder(sda);
            var ds = new DataSet();
            sda.Fill(ds);
            dgvSeller.DataSource = ds.Tables[0];
            Con.Close();
        }
    }
}
      
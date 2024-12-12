using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.Data.SqlClient;

namespace SuperMarket
{
    public partial class LoginForm : Form
    {
        public LoginForm()
        {
            InitializeComponent();
        }
        SqlConnection connection = new SqlConnection(@"Data Source=laptop-9ftus278;Initial Catalog=SuperMarketDb;Persist Security Info=True;User ID=sa;Password=sadikc#24 ");
        public static string Sellername = "";


        private void Form1_Load(object sender, EventArgs e)
        {
   
        }

        private void tbPassword_TextChanged(object sender, EventArgs e)
        {
            tbPassword.UseSystemPasswordChar = true;
        }

        private void tbPassword_KeyPress(object sender, KeyPressEventArgs e)
        {
            if (tbPassword.Text.Length >= 4 && e.KeyChar != '\b')
            {
                e.Handled = true;
                epPassword.SetError(tbPassword, "Password can contain only 4 characters");
            }
            else
            {
                epPassword.SetError(tbPassword, "");
            }
        }

        private void label3_Click(object sender, EventArgs e)
        {

        }

        private void btnLogin_Click(object sender, EventArgs e)
        {
           
              string username = tbUsername.Text.Trim();

            string password = tbPassword.Text;

            if (string.IsNullOrEmpty(username) || string.IsNullOrEmpty(password))

            {

                MessageBox.Show("Please enter a username and password.");

                return;

            }

            try

            {

                connection.Open();

                string query = "SELECT COUNT(*) FROM AdminTbl WHERE AdminId=@Username AND Password=@Password";

                SqlCommand command = new SqlCommand(query, connection);

                command.Parameters.AddWithValue("@Username", username);

                command.Parameters.AddWithValue("@Password", password);

                int count = (int)command.ExecuteScalar();

                if (count == 1)

                {

                    this.Hide();

                    SellerForm sellerForm = new SellerForm();

                    sellerForm.ShowDialog();

                }

                else

                {

                    query = "SELECT COUNT(*) FROM SellersTbl WHERE SellerId=@Username AND SellerPass=@Password";

                    command = new SqlCommand(query, connection);

                    command.Parameters.AddWithValue("@Username", username);

                    command.Parameters.AddWithValue("@Password", password);

                    count = (int)command.ExecuteScalar();

                    if (count == 1)

                    {

                        Sellername = tbUsername.Text;

                        this.Hide();

                        SellingForm sellingForm = new SellingForm();

                        sellingForm.ShowDialog();

                    }

                    else

                    {

                        MessageBox.Show("Invalid username or password.");

                    }

                }

            }

            catch (Exception ex)

            {

                MessageBox.Show("An error occurred: " + ex.Message);

            }

            finally

            {

                connection.Close();

            }
        }

        private void btnExit_Click(object sender, EventArgs e)
        {
            Application.Exit();
        }

        private void tbUsername_KeyPress(object sender, KeyPressEventArgs e)
        {

            if (!char.IsLower(e.KeyChar) && !char.IsDigit(e.KeyChar) && e.KeyChar != '\b')
            {
                e.Handled = true;
                epUsername.SetError(tbUsername, "Username can contain only lowercase letters and numbers");
            }
            else
            {
                epUsername.SetError(tbUsername, "");
            }
        }


        private void tbUsername_TextChanged(object sender, EventArgs e)
        {

        }

        private void label4_Click(object sender, EventArgs e)
        {

        }

        private void pictureBox1_Click(object sender, EventArgs e)
        {

        }
    }
}





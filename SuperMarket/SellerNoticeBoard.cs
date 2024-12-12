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
    public partial class SellerNoticeBoard : Form
    {
        public SellerNoticeBoard()
        {
            InitializeComponent();
        }

        SqlConnection connection = new SqlConnection(@"Data Source=laptop-9ftus278;Initial Catalog=SuperMarketDb;Persist Security Info=True;User ID=sa;Password=sadikc#24 ")

         private void Filldata()
        {
            Con.Open();
            string query = "select * from AdminNotice";
            SqlDataAdapter sda = new SqlDataAdapter(query, Con);
            SqlCommandBuilder builder = new SqlCommandBuilder(sda);
            var ds = new DataSet();
            sda.Fill(ds);
            dgvSellerNotice.DataSource = ds.Tables[0];
            Con.Close();
        }

        private void SellerNoticeBoardForm_Load(object sender, EventArgs e)
        {
            Filldata();
        }

        private void btnSelling_Click(object sender, EventArgs e)
        {
            SellingForm sellingForm = new SellingForm();
            sellingForm.Show();
            this.Hide()
        }

        private void bynSellsRecord_Click(object sender, EventArgs e)
        {
            SellerSellsRecordForm sellerSellsRecordForm = new SellerSellsRecordForm();
            sellerSellsRecordForm.Show();
            this.Hide()
        }

        private void button1_Click(object sender, EventArgs e)
        {
            LoginForm loginForm = new LoginForm();
            loginForm.Show();
            this.Hide();
        }
    }
}

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
    public partial class SellersSellRecord : Form
    {
        public SellersSellRecord()
        {
            InitializeComponent();
        }

        SqlConnection connection = new SqlConnection(@"Data Source=laptop-9ftus278;Initial Catalog=SuperMarketDb;Persist Security Info=True;User ID=sa;Password=sadikc#24");

        private void SellersSellRecord_Load(object sender, EventArgs e)
        {
            FillDataBills();
            lblSellerName.Text = "" + LoginForm.Sellername;
            lblDate.Text = DateTime.Today.Day.ToString() + "/" + DateTime.Today.Month.ToString() + "/" + DateTime.Today.Year.ToString();
        }

        private void btnSelling_Click(object sender, EventArgs e)
        {
            SellingForm sellingForm = new SellingForm();
            sellingForm.Show();
            this.Hide();
        }

        private void btnSellsRecord_Click(object sender, EventArgs e)
        {

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

        private void dgvSellsList_CellContentClick(object sender, DataGridViewCellEventArgs e)
        {
            tbBillId.Text = dgvSellsList.SelectedRows[0].Cells[0].Value.ToString();
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
    }
}



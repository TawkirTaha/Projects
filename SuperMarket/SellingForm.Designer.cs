namespace SuperMarket
{
    partial class SellingForm
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.btn = new System.Windows.Forms.Panel();
            this.pnlLarge = new System.Windows.Forms.Panel();
            this.panel2 = new System.Windows.Forms.Panel();
            this.panel3 = new System.Windows.Forms.Panel();
            this.dataGridView1 = new System.Windows.Forms.DataGridView();
            this.btnSelling = new System.Windows.Forms.Button();
            this.btnSellsRecord = new System.Windows.Forms.Button();
            this.btnNotice = new System.Windows.Forms.Button();
            this.btnLogout = new System.Windows.Forms.Button();
            this.lblSellerName = new System.Windows.Forms.Label();
            this.lblDate = new System.Windows.Forms.Label();
            this.label3 = new System.Windows.Forms.Label();
            this.label1 = new System.Windows.Forms.Label();
            this.label2 = new System.Windows.Forms.Label();
            this.label4 = new System.Windows.Forms.Label();
            this.label5 = new System.Windows.Forms.Label();
            this.label6 = new System.Windows.Forms.Label();
            this.label8 = new System.Windows.Forms.Label();
            this.label9 = new System.Windows.Forms.Label();
            this.tbAvailableQty = new System.Windows.Forms.TextBox();
            this.tbPrice = new System.Windows.Forms.TextBox();
            this.tbProdName = new System.Windows.Forms.TextBox();
            this.cbQty = new System.Windows.Forms.ComboBox();
            this.tbQty = new System.Windows.Forms.TextBox();
            this.cbSelling = new System.Windows.Forms.ComboBox();
            this.btnAddtoCart = new System.Windows.Forms.Button();
            this.dataGridView2 = new System.Windows.Forms.DataGridView();
            this.btnReset = new System.Windows.Forms.Button();
            this.lblAmount = new System.Windows.Forms.Label();
            this.lblTaka = new System.Windows.Forms.Label();
            this.textBox1 = new System.Windows.Forms.TextBox();
            this.btnDone = new System.Windows.Forms.Button();
            this.ProductId = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.ProductName = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.ProductPrice = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.ProductQuantity = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.ProductTotal = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.btn.SuspendLayout();
            this.pnlLarge.SuspendLayout();
            this.panel2.SuspendLayout();
            ((System.ComponentModel.ISupportInitialize)(this.dataGridView1)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.dataGridView2)).BeginInit();
            this.SuspendLayout();
            // 
            // btn
            // 
            this.btn.BackColor = System.Drawing.SystemColors.Info;
            this.btn.Controls.Add(this.btnLogout);
            this.btn.Controls.Add(this.btnNotice);
            this.btn.Controls.Add(this.btnSellsRecord);
            this.btn.Controls.Add(this.btnSelling);
            this.btn.Controls.Add(this.pnlLarge);
            this.btn.Location = new System.Drawing.Point(0, 0);
            this.btn.Name = "btn";
            this.btn.Size = new System.Drawing.Size(1049, 571);
            this.btn.TabIndex = 0;
            this.btn.Paint += new System.Windows.Forms.PaintEventHandler(this.btn_Paint);
            // 
            // pnlLarge
            // 
            this.pnlLarge.Controls.Add(this.btnDone);
            this.pnlLarge.Controls.Add(this.textBox1);
            this.pnlLarge.Controls.Add(this.lblTaka);
            this.pnlLarge.Controls.Add(this.lblAmount);
            this.pnlLarge.Controls.Add(this.btnReset);
            this.pnlLarge.Controls.Add(this.dataGridView2);
            this.pnlLarge.Controls.Add(this.label8);
            this.pnlLarge.Controls.Add(this.label1);
            this.pnlLarge.Controls.Add(this.btnAddtoCart);
            this.pnlLarge.Controls.Add(this.cbSelling);
            this.pnlLarge.Controls.Add(this.tbQty);
            this.pnlLarge.Controls.Add(this.cbQty);
            this.pnlLarge.Controls.Add(this.tbProdName);
            this.pnlLarge.Controls.Add(this.tbPrice);
            this.pnlLarge.Controls.Add(this.tbAvailableQty);
            this.pnlLarge.Controls.Add(this.label9);
            this.pnlLarge.Controls.Add(this.dataGridView1);
            this.pnlLarge.Controls.Add(this.label4);
            this.pnlLarge.Controls.Add(this.label5);
            this.pnlLarge.Controls.Add(this.panel3);
            this.pnlLarge.Controls.Add(this.panel2);
            this.pnlLarge.Controls.Add(this.label2);
            this.pnlLarge.Location = new System.Drawing.Point(212, 3);
            this.pnlLarge.Name = "pnlLarge";
            this.pnlLarge.Size = new System.Drawing.Size(837, 565);
            this.pnlLarge.TabIndex = 0;
            // 
            // panel2
            // 
            this.panel2.Controls.Add(this.label3);
            this.panel2.Controls.Add(this.lblDate);
            this.panel2.Controls.Add(this.lblSellerName);
            this.panel2.Controls.Add(this.label6);
            this.panel2.Location = new System.Drawing.Point(0, 0);
            this.panel2.Name = "panel2";
            this.panel2.Size = new System.Drawing.Size(837, 77);
            this.panel2.TabIndex = 0;
            this.panel2.Paint += new System.Windows.Forms.PaintEventHandler(this.panel2_Paint);
            // 
            // panel3
            // 
            this.panel3.Location = new System.Drawing.Point(401, 83);
            this.panel3.Name = "panel3";
            this.panel3.Size = new System.Drawing.Size(10, 462);
            this.panel3.TabIndex = 0;
            // 
            // dataGridView1
            // 
            this.dataGridView1.ColumnHeadersHeightSizeMode = System.Windows.Forms.DataGridViewColumnHeadersHeightSizeMode.AutoSize;
            this.dataGridView1.Location = new System.Drawing.Point(18, 294);
            this.dataGridView1.Name = "dataGridView1";
            this.dataGridView1.ReadOnly = true;
            this.dataGridView1.RowHeadersWidth = 51;
            this.dataGridView1.RowTemplate.Height = 24;
            this.dataGridView1.Size = new System.Drawing.Size(367, 251);
            this.dataGridView1.TabIndex = 1;
            this.dataGridView1.CellContentClick += new System.Windows.Forms.DataGridViewCellEventHandler(this.dataGridView1_CellContentClick);
            // 
            // btnSelling
            // 
            this.btnSelling.Font = new System.Drawing.Font("Microsoft Sans Serif", 10F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.btnSelling.Location = new System.Drawing.Point(64, 210);
            this.btnSelling.Name = "btnSelling";
            this.btnSelling.Size = new System.Drawing.Size(100, 28);
            this.btnSelling.TabIndex = 2;
            this.btnSelling.Text = "Selling";
            this.btnSelling.UseVisualStyleBackColor = true;
            this.btnSelling.Click += new System.EventHandler(this.btnSelling_Click);
            // 
            // btnSellsRecord
            // 
            this.btnSellsRecord.Font = new System.Drawing.Font("Microsoft Sans Serif", 10F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.btnSellsRecord.Location = new System.Drawing.Point(64, 277);
            this.btnSellsRecord.Name = "btnSellsRecord";
            this.btnSellsRecord.Size = new System.Drawing.Size(95, 49);
            this.btnSellsRecord.TabIndex = 3;
            this.btnSellsRecord.Text = "Sells Record";
            this.btnSellsRecord.UseVisualStyleBackColor = true;
            this.btnSellsRecord.Click += new System.EventHandler(this.btnSellsRecord_Click);
            // 
            // btnNotice
            // 
            this.btnNotice.Font = new System.Drawing.Font("Microsoft Sans Serif", 10F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.btnNotice.Location = new System.Drawing.Point(64, 352);
            this.btnNotice.Name = "btnNotice";
            this.btnNotice.Size = new System.Drawing.Size(95, 37);
            this.btnNotice.TabIndex = 4;
            this.btnNotice.Text = "Notice";
            this.btnNotice.UseVisualStyleBackColor = true;
            this.btnNotice.Click += new System.EventHandler(this.btnNotice_Click);
            // 
            // btnLogout
            // 
            this.btnLogout.Font = new System.Drawing.Font("Microsoft Sans Serif", 10F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.btnLogout.ForeColor = System.Drawing.Color.Red;
            this.btnLogout.Location = new System.Drawing.Point(64, 474);
            this.btnLogout.Name = "btnLogout";
            this.btnLogout.Size = new System.Drawing.Size(95, 35);
            this.btnLogout.TabIndex = 5;
            this.btnLogout.Text = "Log Out";
            this.btnLogout.UseVisualStyleBackColor = true;
            this.btnLogout.Click += new System.EventHandler(this.btnLogout_Click);
            // 
            // lblSellerName
            // 
            this.lblSellerName.AutoSize = true;
            this.lblSellerName.Font = new System.Drawing.Font("Microsoft Sans Serif", 10F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.lblSellerName.Location = new System.Drawing.Point(332, 17);
            this.lblSellerName.Name = "lblSellerName";
            this.lblSellerName.Size = new System.Drawing.Size(58, 20);
            this.lblSellerName.TabIndex = 6;
            this.lblSellerName.Text = "Seller";
            // 
            // lblDate
            // 
            this.lblDate.AutoSize = true;
            this.lblDate.Font = new System.Drawing.Font("Microsoft Sans Serif", 10F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.lblDate.Location = new System.Drawing.Point(332, 44);
            this.lblDate.Name = "lblDate";
            this.lblDate.Size = new System.Drawing.Size(49, 20);
            this.lblDate.TabIndex = 7;
            this.lblDate.Text = "Date";
            // 
            // label3
            // 
            this.label3.AutoSize = true;
            this.label3.Font = new System.Drawing.Font("Microsoft Sans Serif", 10F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label3.Location = new System.Drawing.Point(156, 44);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(55, 20);
            this.label3.TabIndex = 8;
            this.label3.Text = "Date:";
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Font = new System.Drawing.Font("Microsoft Sans Serif", 7.8F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label1.Location = new System.Drawing.Point(471, 408);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(46, 16);
            this.label1.TabIndex = 9;
            this.label1.Text = "Bill Id";
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Font = new System.Drawing.Font("Microsoft Sans Serif", 10F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label2.Location = new System.Drawing.Point(59, 123);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(53, 20);
            this.label2.TabIndex = 10;
            this.label2.Text = "Price";
            // 
            // label4
            // 
            this.label4.AutoSize = true;
            this.label4.Font = new System.Drawing.Font("Microsoft Sans Serif", 10F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label4.Location = new System.Drawing.Point(59, 96);
            this.label4.Name = "label4";
            this.label4.Size = new System.Drawing.Size(128, 20);
            this.label4.TabIndex = 11;
            this.label4.Text = "Product Name";
            this.label4.Click += new System.EventHandler(this.label4_Click);
            // 
            // label5
            // 
            this.label5.AutoSize = true;
            this.label5.Font = new System.Drawing.Font("Microsoft Sans Serif", 10F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label5.Location = new System.Drawing.Point(59, 185);
            this.label5.Name = "label5";
            this.label5.Size = new System.Drawing.Size(79, 20);
            this.label5.TabIndex = 12;
            this.label5.Text = "Quantity";
            // 
            // label6
            // 
            this.label6.AutoSize = true;
            this.label6.Font = new System.Drawing.Font("Microsoft Sans Serif", 10F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label6.Location = new System.Drawing.Point(151, 17);
            this.label6.Name = "label6";
            this.label6.Size = new System.Drawing.Size(118, 20);
            this.label6.TabIndex = 13;
            this.label6.Text = "Seller Name:";
            // 
            // label8
            // 
            this.label8.AutoSize = true;
            this.label8.Font = new System.Drawing.Font("Microsoft Sans Serif", 16.2F, ((System.Drawing.FontStyle)(((System.Drawing.FontStyle.Bold | System.Drawing.FontStyle.Italic) 
                | System.Drawing.FontStyle.Underline))), System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label8.Location = new System.Drawing.Point(531, 96);
            this.label8.Name = "label8";
            this.label8.Size = new System.Drawing.Size(205, 32);
            this.label8.TabIndex = 13;
            this.label8.Text = "Cart Overview";
            // 
            // label9
            // 
            this.label9.AutoSize = true;
            this.label9.Font = new System.Drawing.Font("Microsoft Sans Serif", 10F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label9.Location = new System.Drawing.Point(59, 152);
            this.label9.Name = "label9";
            this.label9.Size = new System.Drawing.Size(161, 20);
            this.label9.TabIndex = 14;
            this.label9.Text = "Available Quantity";
            // 
            // tbAvailableQty
            // 
            this.tbAvailableQty.Location = new System.Drawing.Point(218, 151);
            this.tbAvailableQty.Name = "tbAvailableQty";
            this.tbAvailableQty.Size = new System.Drawing.Size(100, 22);
            this.tbAvailableQty.TabIndex = 15;
            // 
            // tbPrice
            // 
            this.tbPrice.Location = new System.Drawing.Point(218, 123);
            this.tbPrice.Name = "tbPrice";
            this.tbPrice.Size = new System.Drawing.Size(100, 22);
            this.tbPrice.TabIndex = 16;
            // 
            // tbProdName
            // 
            this.tbProdName.Location = new System.Drawing.Point(218, 96);
            this.tbProdName.Name = "tbProdName";
            this.tbProdName.Size = new System.Drawing.Size(100, 22);
            this.tbProdName.TabIndex = 17;
            // 
            // cbQty
            // 
            this.cbQty.FormattingEnabled = true;
            this.cbQty.Location = new System.Drawing.Point(218, 181);
            this.cbQty.Name = "cbQty";
            this.cbQty.Size = new System.Drawing.Size(43, 24);
            this.cbQty.TabIndex = 18;
            this.cbQty.SelectedIndexChanged += new System.EventHandler(this.cbQty_SelectedIndexChanged);
            // 
            // tbQty
            // 
            this.tbQty.Location = new System.Drawing.Point(324, 183);
            this.tbQty.Name = "tbQty";
            this.tbQty.Size = new System.Drawing.Size(50, 22);
            this.tbQty.TabIndex = 19;
            // 
            // cbSelling
            // 
            this.cbSelling.Font = new System.Drawing.Font("Microsoft Sans Serif", 10F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.cbSelling.FormattingEnabled = true;
            this.cbSelling.Location = new System.Drawing.Point(61, 233);
            this.cbSelling.Name = "cbSelling";
            this.cbSelling.Size = new System.Drawing.Size(150, 28);
            this.cbSelling.TabIndex = 20;
            this.cbSelling.Text = "Select Catagory";
            // 
            // btnAddtoCart
            // 
            this.btnAddtoCart.Font = new System.Drawing.Font("Microsoft Sans Serif", 10F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.btnAddtoCart.Location = new System.Drawing.Point(218, 233);
            this.btnAddtoCart.Name = "btnAddtoCart";
            this.btnAddtoCart.Size = new System.Drawing.Size(156, 28);
            this.btnAddtoCart.TabIndex = 21;
            this.btnAddtoCart.Text = "Add to Cart";
            this.btnAddtoCart.UseVisualStyleBackColor = true;
            this.btnAddtoCart.Click += new System.EventHandler(this.btnAddtoCart_Click);
            // 
            // dataGridView2
            // 
            this.dataGridView2.ColumnHeadersHeightSizeMode = System.Windows.Forms.DataGridViewColumnHeadersHeightSizeMode.AutoSize;
            this.dataGridView2.Columns.AddRange(new System.Windows.Forms.DataGridViewColumn[] {
            this.ProductId,
            this.ProductName,
            this.ProductPrice,
            this.ProductQuantity,
            this.ProductTotal});
            this.dataGridView2.Location = new System.Drawing.Point(417, 173);
            this.dataGridView2.Name = "dataGridView2";
            this.dataGridView2.ReadOnly = true;
            this.dataGridView2.RowHeadersWidth = 51;
            this.dataGridView2.RowTemplate.Height = 24;
            this.dataGridView2.Size = new System.Drawing.Size(389, 150);
            this.dataGridView2.TabIndex = 22;
            // 
            // btnReset
            // 
            this.btnReset.Font = new System.Drawing.Font("Microsoft Sans Serif", 7.8F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.btnReset.Location = new System.Drawing.Point(748, 144);
            this.btnReset.Name = "btnReset";
            this.btnReset.Size = new System.Drawing.Size(75, 23);
            this.btnReset.TabIndex = 23;
            this.btnReset.Text = "Reset";
            this.btnReset.UseVisualStyleBackColor = true;
            this.btnReset.Click += new System.EventHandler(this.btnReset_Click);
            // 
            // lblAmount
            // 
            this.lblAmount.AutoSize = true;
            this.lblAmount.BackColor = System.Drawing.SystemColors.ButtonHighlight;
            this.lblAmount.Font = new System.Drawing.Font("Microsoft Sans Serif", 7.8F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.lblAmount.Location = new System.Drawing.Point(463, 360);
            this.lblAmount.Name = "lblAmount";
            this.lblAmount.Size = new System.Drawing.Size(66, 16);
            this.lblAmount.TabIndex = 24;
            this.lblAmount.Text = "Amount :";
            // 
            // lblTaka
            // 
            this.lblTaka.AutoSize = true;
            this.lblTaka.BackColor = System.Drawing.SystemColors.ButtonHighlight;
            this.lblTaka.Font = new System.Drawing.Font("Microsoft Sans Serif", 7.8F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.lblTaka.Location = new System.Drawing.Point(725, 360);
            this.lblTaka.Name = "lblTaka";
            this.lblTaka.Size = new System.Drawing.Size(43, 16);
            this.lblTaka.TabIndex = 25;
            this.lblTaka.Text = "Taka";
            // 
            // textBox1
            // 
            this.textBox1.Location = new System.Drawing.Point(599, 402);
            this.textBox1.Name = "textBox1";
            this.textBox1.Size = new System.Drawing.Size(100, 22);
            this.textBox1.TabIndex = 26;
            // 
            // btnDone
            // 
            this.btnDone.BackColor = System.Drawing.SystemColors.ScrollBar;
            this.btnDone.Font = new System.Drawing.Font("Microsoft Sans Serif", 7.8F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.btnDone.Location = new System.Drawing.Point(599, 471);
            this.btnDone.Name = "btnDone";
            this.btnDone.Size = new System.Drawing.Size(100, 23);
            this.btnDone.TabIndex = 27;
            this.btnDone.Text = "Done";
            this.btnDone.UseVisualStyleBackColor = false;
            this.btnDone.Click += new System.EventHandler(this.btnDone_Click);
            // 
            // ProductId
            // 
            this.ProductId.HeaderText = "ProdId";
            this.ProductId.MinimumWidth = 6;
            this.ProductId.Name = "ProductId";
            this.ProductId.ReadOnly = true;
            this.ProductId.Width = 125;
            // 
            // ProductName
            // 
            this.ProductName.HeaderText = "ProdName";
            this.ProductName.MinimumWidth = 6;
            this.ProductName.Name = "ProductName";
            this.ProductName.ReadOnly = true;
            this.ProductName.Width = 125;
            // 
            // ProductPrice
            // 
            this.ProductPrice.HeaderText = "Price";
            this.ProductPrice.MinimumWidth = 6;
            this.ProductPrice.Name = "ProductPrice";
            this.ProductPrice.ReadOnly = true;
            this.ProductPrice.Width = 125;
            // 
            // ProductQuantity
            // 
            this.ProductQuantity.HeaderText = "Quantity";
            this.ProductQuantity.MinimumWidth = 6;
            this.ProductQuantity.Name = "ProductQuantity";
            this.ProductQuantity.ReadOnly = true;
            this.ProductQuantity.Width = 125;
            // 
            // ProductTotal
            // 
            this.ProductTotal.HeaderText = "Total";
            this.ProductTotal.MinimumWidth = 6;
            this.ProductTotal.Name = "ProductTotal";
            this.ProductTotal.ReadOnly = true;
            this.ProductTotal.Width = 125;
            // 
            // SellingForm
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(8F, 16F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackColor = System.Drawing.SystemColors.Info;
            this.ClientSize = new System.Drawing.Size(1047, 583);
            this.Controls.Add(this.btn);
            this.Name = "SellingForm";
            this.StartPosition = System.Windows.Forms.FormStartPosition.CenterScreen;
            this.Text = "Selling Section";
            this.Load += new System.EventHandler(this.SellingForm_Load);
            this.btn.ResumeLayout(false);
            this.pnlLarge.ResumeLayout(false);
            this.pnlLarge.PerformLayout();
            this.panel2.ResumeLayout(false);
            this.panel2.PerformLayout();
            ((System.ComponentModel.ISupportInitialize)(this.dataGridView1)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.dataGridView2)).EndInit();
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.Panel btn;
        private System.Windows.Forms.Button btnLogout;
        private System.Windows.Forms.Button btnNotice;
        private System.Windows.Forms.Button btnSellsRecord;
        private System.Windows.Forms.Button btnSelling;
        private System.Windows.Forms.Panel pnlLarge;
        private System.Windows.Forms.DataGridView dataGridView1;
        private System.Windows.Forms.Panel panel3;
        private System.Windows.Forms.Panel panel2;
        private System.Windows.Forms.Label label4;
        private System.Windows.Forms.Label label5;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.Label label3;
        private System.Windows.Forms.Label lblDate;
        private System.Windows.Forms.Label lblSellerName;
        private System.Windows.Forms.Label label6;
        private System.Windows.Forms.Label label8;
        private System.Windows.Forms.ComboBox cbSelling;
        private System.Windows.Forms.TextBox tbQty;
        private System.Windows.Forms.ComboBox cbQty;
        private System.Windows.Forms.TextBox tbProdName;
        private System.Windows.Forms.TextBox tbPrice;
        private System.Windows.Forms.TextBox tbAvailableQty;
        private System.Windows.Forms.Label label9;
        private System.Windows.Forms.Button btnAddtoCart;
        private System.Windows.Forms.Button btnDone;
        private System.Windows.Forms.TextBox textBox1;
        private System.Windows.Forms.Label lblTaka;
        private System.Windows.Forms.Label lblAmount;
        private System.Windows.Forms.Button btnReset;
        private System.Windows.Forms.DataGridView dataGridView2;
        private System.Windows.Forms.DataGridViewTextBoxColumn ProductId;
        private System.Windows.Forms.DataGridViewTextBoxColumn ProductName;
        private System.Windows.Forms.DataGridViewTextBoxColumn ProductPrice;
        private System.Windows.Forms.DataGridViewTextBoxColumn ProductQuantity;
        private System.Windows.Forms.DataGridViewTextBoxColumn ProductTotal;
    }
}
namespace SuperMarket
{
    partial class SellerNoticeBoard
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
            this.panel1 = new System.Windows.Forms.Panel();
            this.pnlLarge = new System.Windows.Forms.Panel();
            this.dgvSellerNotice = new System.Windows.Forms.DataGridView();
            this.button1 = new System.Windows.Forms.Button();
            this.btnLogin = new System.Windows.Forms.Button();
            this.btnSelling = new System.Windows.Forms.Button();
            this.bynSellsRecord = new System.Windows.Forms.Button();
            this.label3 = new System.Windows.Forms.Label();
            this.panel1.SuspendLayout();
            this.pnlLarge.SuspendLayout();
            ((System.ComponentModel.ISupportInitialize)(this.dgvSellerNotice)).BeginInit();
            this.SuspendLayout();
            // 
            // panel1
            // 
            this.panel1.Controls.Add(this.bynSellsRecord);
            this.panel1.Controls.Add(this.btnSelling);
            this.panel1.Controls.Add(this.btnLogin);
            this.panel1.Controls.Add(this.button1);
            this.panel1.Controls.Add(this.pnlLarge);
            this.panel1.Dock = System.Windows.Forms.DockStyle.Fill;
            this.panel1.Location = new System.Drawing.Point(0, 0);
            this.panel1.Name = "panel1";
            this.panel1.Size = new System.Drawing.Size(800, 450);
            this.panel1.TabIndex = 0;
            // 
            // pnlLarge
            // 
            this.pnlLarge.Controls.Add(this.label3);
            this.pnlLarge.Controls.Add(this.dgvSellerNotice);
            this.pnlLarge.Location = new System.Drawing.Point(162, 3);
            this.pnlLarge.Name = "pnlLarge";
            this.pnlLarge.Size = new System.Drawing.Size(638, 447);
            this.pnlLarge.TabIndex = 0;
            // 
            // dgvSellerNotice
            // 
            this.dgvSellerNotice.ColumnHeadersHeightSizeMode = System.Windows.Forms.DataGridViewColumnHeadersHeightSizeMode.AutoSize;
            this.dgvSellerNotice.Location = new System.Drawing.Point(32, 94);
            this.dgvSellerNotice.Name = "dgvSellerNotice";
            this.dgvSellerNotice.ReadOnly = true;
            this.dgvSellerNotice.RowHeadersWidth = 51;
            this.dgvSellerNotice.RowTemplate.Height = 24;
            this.dgvSellerNotice.Size = new System.Drawing.Size(581, 316);
            this.dgvSellerNotice.TabIndex = 1;
            // 
            // button1
            // 
            this.button1.BackColor = System.Drawing.SystemColors.MenuHighlight;
            this.button1.Font = new System.Drawing.Font("Microsoft Sans Serif", 10.2F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.button1.Location = new System.Drawing.Point(34, 337);
            this.button1.Name = "button1";
            this.button1.Size = new System.Drawing.Size(75, 28);
            this.button1.TabIndex = 2;
            this.button1.Text = "Notice";
            this.button1.UseVisualStyleBackColor = false;
            this.button1.Click += new System.EventHandler(this.button1_Click);
            // 
            // btnLogin
            // 
            this.btnLogin.Location = new System.Drawing.Point(34, 400);
            this.btnLogin.Name = "btnLogin";
            this.btnLogin.Size = new System.Drawing.Size(75, 23);
            this.btnLogin.TabIndex = 3;
            this.btnLogin.Text = "Log Out";
            this.btnLogin.UseVisualStyleBackColor = true;
            // 
            // btnSelling
            // 
            this.btnSelling.Font = new System.Drawing.Font("Microsoft Sans Serif", 10.2F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.btnSelling.Location = new System.Drawing.Point(34, 195);
            this.btnSelling.Name = "btnSelling";
            this.btnSelling.Size = new System.Drawing.Size(91, 32);
            this.btnSelling.TabIndex = 4;
            this.btnSelling.Text = "Selling";
            this.btnSelling.UseVisualStyleBackColor = true;
            this.btnSelling.Click += new System.EventHandler(this.btnSelling_Click);
            // 
            // bynSellsRecord
            // 
            this.bynSellsRecord.Font = new System.Drawing.Font("Microsoft Sans Serif", 10.2F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.bynSellsRecord.Location = new System.Drawing.Point(34, 247);
            this.bynSellsRecord.Name = "bynSellsRecord";
            this.bynSellsRecord.Size = new System.Drawing.Size(91, 60);
            this.bynSellsRecord.TabIndex = 5;
            this.bynSellsRecord.Text = "Sells Record";
            this.bynSellsRecord.UseVisualStyleBackColor = true;
            this.bynSellsRecord.Click += new System.EventHandler(this.bynSellsRecord_Click);
            // 
            // label3
            // 
            this.label3.AutoSize = true;
            this.label3.Font = new System.Drawing.Font("Verdana", 16.2F, ((System.Drawing.FontStyle)((System.Drawing.FontStyle.Bold | System.Drawing.FontStyle.Italic))), System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label3.Location = new System.Drawing.Point(214, 24);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(219, 34);
            this.label3.TabIndex = 8;
            this.label3.Text = "Notice Board";
            // 
            // SellerNoticeBoard
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(8F, 16F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(800, 450);
            this.Controls.Add(this.panel1);
            this.Name = "SellerNoticeBoard";
            this.Text = "SellerNoticeBoard";
            this.panel1.ResumeLayout(false);
            this.pnlLarge.ResumeLayout(false);
            this.pnlLarge.PerformLayout();
            ((System.ComponentModel.ISupportInitialize)(this.dgvSellerNotice)).EndInit();
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.Panel panel1;
        private System.Windows.Forms.DataGridView dgvSellerNotice;
        private System.Windows.Forms.Panel pnlLarge;
        private System.Windows.Forms.Button button1;
        private System.Windows.Forms.Button bynSellsRecord;
        private System.Windows.Forms.Button btnSelling;
        private System.Windows.Forms.Button btnLogin;
        private System.Windows.Forms.Label label3;
    }
}
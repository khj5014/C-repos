namespace 메이플_순수익_계산기
{
    partial class Form1
    {
        /// <summary>
        /// 필수 디자이너 변수입니다.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// 사용 중인 모든 리소스를 정리합니다.
        /// </summary>
        /// <param name="disposing">관리되는 리소스를 삭제해야 하면 true이고, 그렇지 않으면 false입니다.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form 디자이너에서 생성한 코드

        /// <summary>
        /// 디자이너 지원에 필요한 메서드입니다. 
        /// 이 메서드의 내용을 코드 편집기로 수정하지 마세요.
        /// </summary>
        private void InitializeComponent()
        {
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(Form1));
            this.pictureBox1 = new System.Windows.Forms.PictureBox();
            this.label9 = new System.Windows.Forms.Label();
            this.label4 = new System.Windows.Forms.Label();
            this.label5 = new System.Windows.Forms.Label();
            this.label6 = new System.Windows.Forms.Label();
            this.label3 = new System.Windows.Forms.Label();
            this.label1 = new System.Windows.Forms.Label();
            this.label2 = new System.Windows.Forms.Label();
            this.txt5 = new System.Windows.Forms.TextBox();
            this.txt4 = new System.Windows.Forms.TextBox();
            this.txt3 = new System.Windows.Forms.TextBox();
            this.txt2 = new System.Windows.Forms.TextBox();
            this.txt1 = new System.Windows.Forms.TextBox();
            this.checkBox1 = new System.Windows.Forms.CheckBox();
            this.txt7 = new System.Windows.Forms.TextBox();
            this.txt6 = new System.Windows.Forms.TextBox();
            this.label8 = new System.Windows.Forms.Label();
            this.label11 = new System.Windows.Forms.Label();
            this.label10 = new System.Windows.Forms.Label();
            this.label7 = new System.Windows.Forms.Label();
            this.Click = new System.Windows.Forms.Button();
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox1)).BeginInit();
            this.SuspendLayout();
            // 
            // pictureBox1
            // 
            this.pictureBox1.Anchor = ((System.Windows.Forms.AnchorStyles)((((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Bottom) 
            | System.Windows.Forms.AnchorStyles.Left) 
            | System.Windows.Forms.AnchorStyles.Right)));
            this.pictureBox1.Image = global::메이플_순수익_계산기.Properties.Resources._10;
            this.pictureBox1.Location = new System.Drawing.Point(-1, -1);
            this.pictureBox1.Name = "pictureBox1";
            this.pictureBox1.Size = new System.Drawing.Size(487, 463);
            this.pictureBox1.SizeMode = System.Windows.Forms.PictureBoxSizeMode.StretchImage;
            this.pictureBox1.TabIndex = 0;
            this.pictureBox1.TabStop = false;
            this.pictureBox1.Click += new System.EventHandler(this.pictureBox1_Click);
            // 
            // label9
            // 
            this.label9.AccessibleRole = System.Windows.Forms.AccessibleRole.None;
            this.label9.Anchor = System.Windows.Forms.AnchorStyles.Top;
            this.label9.AutoSize = true;
            this.label9.BackColor = System.Drawing.Color.MediumSpringGreen;
            this.label9.BorderStyle = System.Windows.Forms.BorderStyle.Fixed3D;
            this.label9.Font = new System.Drawing.Font("휴먼편지체", 24F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(129)));
            this.label9.Location = new System.Drawing.Point(316, 39);
            this.label9.Name = "label9";
            this.label9.Padding = new System.Windows.Forms.Padding(2);
            this.label9.Size = new System.Drawing.Size(129, 44);
            this.label9.TabIndex = 6;
            this.label9.Text = "재료가격";
            // 
            // label4
            // 
            this.label4.Anchor = System.Windows.Forms.AnchorStyles.Top;
            this.label4.AutoSize = true;
            this.label4.BackColor = System.Drawing.Color.PapayaWhip;
            this.label4.BorderStyle = System.Windows.Forms.BorderStyle.Fixed3D;
            this.label4.CausesValidation = false;
            this.label4.Font = new System.Drawing.Font("휴먼편지체", 20.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(129)));
            this.label4.ForeColor = System.Drawing.Color.Purple;
            this.label4.Location = new System.Drawing.Point(50, 268);
            this.label4.Name = "label4";
            this.label4.Padding = new System.Windows.Forms.Padding(2);
            this.label4.Size = new System.Drawing.Size(216, 37);
            this.label4.TabIndex = 9;
            this.label4.Text = "최고급 연마제 갯수";
            // 
            // label5
            // 
            this.label5.Anchor = System.Windows.Forms.AnchorStyles.Top;
            this.label5.AutoSize = true;
            this.label5.BackColor = System.Drawing.Color.PapayaWhip;
            this.label5.BorderStyle = System.Windows.Forms.BorderStyle.Fixed3D;
            this.label5.CausesValidation = false;
            this.label5.Font = new System.Drawing.Font("휴먼편지체", 20.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(129)));
            this.label5.ForeColor = System.Drawing.Color.Purple;
            this.label5.Location = new System.Drawing.Point(50, 188);
            this.label5.Name = "label5";
            this.label5.Padding = new System.Windows.Forms.Padding(2);
            this.label5.Size = new System.Drawing.Size(186, 37);
            this.label5.TabIndex = 10;
            this.label5.Text = "큐브의 파편 x 5";
            // 
            // label6
            // 
            this.label6.Anchor = System.Windows.Forms.AnchorStyles.Top;
            this.label6.AutoSize = true;
            this.label6.BackColor = System.Drawing.Color.PapayaWhip;
            this.label6.BorderStyle = System.Windows.Forms.BorderStyle.Fixed3D;
            this.label6.CausesValidation = false;
            this.label6.Font = new System.Drawing.Font("휴먼편지체", 20.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(129)));
            this.label6.ForeColor = System.Drawing.Color.Purple;
            this.label6.Location = new System.Drawing.Point(50, 228);
            this.label6.Name = "label6";
            this.label6.Padding = new System.Windows.Forms.Padding(2);
            this.label6.Size = new System.Drawing.Size(187, 37);
            this.label6.TabIndex = 11;
            this.label6.Text = "장인의큐브 시세";
            // 
            // label3
            // 
            this.label3.Anchor = System.Windows.Forms.AnchorStyles.Top;
            this.label3.AutoSize = true;
            this.label3.BackColor = System.Drawing.Color.PapayaWhip;
            this.label3.BorderStyle = System.Windows.Forms.BorderStyle.Fixed3D;
            this.label3.CausesValidation = false;
            this.label3.Font = new System.Drawing.Font("휴먼편지체", 20.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(129)));
            this.label3.ForeColor = System.Drawing.Color.Purple;
            this.label3.Location = new System.Drawing.Point(18, 148);
            this.label3.Name = "label3";
            this.label3.Padding = new System.Windows.Forms.Padding(2);
            this.label3.Size = new System.Drawing.Size(288, 37);
            this.label3.TabIndex = 12;
            this.label3.Text = "최상급 아이템 결정 x 20";
            // 
            // label1
            // 
            this.label1.AccessibleRole = System.Windows.Forms.AccessibleRole.None;
            this.label1.Anchor = System.Windows.Forms.AnchorStyles.Top;
            this.label1.AutoSize = true;
            this.label1.BackColor = System.Drawing.Color.MediumSpringGreen;
            this.label1.BorderStyle = System.Windows.Forms.BorderStyle.Fixed3D;
            this.label1.Font = new System.Drawing.Font("휴먼편지체", 24F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(129)));
            this.label1.Location = new System.Drawing.Point(96, 39);
            this.label1.Name = "label1";
            this.label1.Padding = new System.Windows.Forms.Padding(2);
            this.label1.Size = new System.Drawing.Size(130, 44);
            this.label1.TabIndex = 7;
            this.label1.Text = "큐브 재료";
            // 
            // label2
            // 
            this.label2.Anchor = System.Windows.Forms.AnchorStyles.Top;
            this.label2.AutoSize = true;
            this.label2.BackColor = System.Drawing.Color.PapayaWhip;
            this.label2.BorderStyle = System.Windows.Forms.BorderStyle.Fixed3D;
            this.label2.CausesValidation = false;
            this.label2.Font = new System.Drawing.Font("휴먼편지체", 20.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(129)));
            this.label2.ForeColor = System.Drawing.Color.Purple;
            this.label2.Location = new System.Drawing.Point(50, 108);
            this.label2.Name = "label2";
            this.label2.Padding = new System.Windows.Forms.Padding(2);
            this.label2.Size = new System.Drawing.Size(186, 37);
            this.label2.TabIndex = 13;
            this.label2.Text = "혼돈의 칼날 x 5";
            this.label2.TextAlign = System.Drawing.ContentAlignment.MiddleCenter;
            // 
            // txt5
            // 
            this.txt5.Anchor = System.Windows.Forms.AnchorStyles.Top;
            this.txt5.BackColor = System.Drawing.Color.LightGoldenrodYellow;
            this.txt5.Font = new System.Drawing.Font("굴림", 20.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(129)));
            this.txt5.ForeColor = System.Drawing.Color.Blue;
            this.txt5.Location = new System.Drawing.Point(310, 228);
            this.txt5.MaximumSize = new System.Drawing.Size(286, 78);
            this.txt5.MaxLength = 20;
            this.txt5.MinimumSize = new System.Drawing.Size(143, 39);
            this.txt5.Name = "txt5";
            this.txt5.RightToLeft = System.Windows.Forms.RightToLeft.Yes;
            this.txt5.Size = new System.Drawing.Size(143, 39);
            this.txt5.TabIndex = 5;
            // 
            // txt4
            // 
            this.txt4.Anchor = System.Windows.Forms.AnchorStyles.Top;
            this.txt4.BackColor = System.Drawing.Color.LightGoldenrodYellow;
            this.txt4.Font = new System.Drawing.Font("굴림", 20.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(129)));
            this.txt4.ForeColor = System.Drawing.Color.Blue;
            this.txt4.Location = new System.Drawing.Point(310, 188);
            this.txt4.MaximumSize = new System.Drawing.Size(286, 78);
            this.txt4.MaxLength = 20;
            this.txt4.MinimumSize = new System.Drawing.Size(143, 39);
            this.txt4.Name = "txt4";
            this.txt4.RightToLeft = System.Windows.Forms.RightToLeft.Yes;
            this.txt4.Size = new System.Drawing.Size(143, 39);
            this.txt4.TabIndex = 4;
            // 
            // txt3
            // 
            this.txt3.Anchor = System.Windows.Forms.AnchorStyles.Top;
            this.txt3.BackColor = System.Drawing.Color.LightGoldenrodYellow;
            this.txt3.Enabled = false;
            this.txt3.Font = new System.Drawing.Font("굴림", 20.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(129)));
            this.txt3.ForeColor = System.Drawing.Color.Blue;
            this.txt3.Location = new System.Drawing.Point(310, 268);
            this.txt3.MaximumSize = new System.Drawing.Size(143, 39);
            this.txt3.MaxLength = 20;
            this.txt3.MinimumSize = new System.Drawing.Size(42, 39);
            this.txt3.Name = "txt3";
            this.txt3.RightToLeft = System.Windows.Forms.RightToLeft.Yes;
            this.txt3.Size = new System.Drawing.Size(143, 39);
            this.txt3.TabIndex = 15;
            this.txt3.Text = "500000";
            // 
            // txt2
            // 
            this.txt2.Anchor = System.Windows.Forms.AnchorStyles.Top;
            this.txt2.BackColor = System.Drawing.Color.LightGoldenrodYellow;
            this.txt2.Font = new System.Drawing.Font("굴림", 20.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(129)));
            this.txt2.ForeColor = System.Drawing.Color.Blue;
            this.txt2.Location = new System.Drawing.Point(310, 148);
            this.txt2.MaximumSize = new System.Drawing.Size(286, 78);
            this.txt2.MaxLength = 20;
            this.txt2.MinimumSize = new System.Drawing.Size(143, 39);
            this.txt2.Name = "txt2";
            this.txt2.RightToLeft = System.Windows.Forms.RightToLeft.Yes;
            this.txt2.Size = new System.Drawing.Size(143, 39);
            this.txt2.TabIndex = 3;
            // 
            // txt1
            // 
            this.txt1.Anchor = System.Windows.Forms.AnchorStyles.Top;
            this.txt1.BackColor = System.Drawing.Color.LightGoldenrodYellow;
            this.txt1.Font = new System.Drawing.Font("굴림", 20.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(129)));
            this.txt1.ForeColor = System.Drawing.Color.Blue;
            this.txt1.Location = new System.Drawing.Point(310, 108);
            this.txt1.MaximumSize = new System.Drawing.Size(286, 78);
            this.txt1.MaxLength = 20;
            this.txt1.MinimumSize = new System.Drawing.Size(143, 39);
            this.txt1.Name = "txt1";
            this.txt1.RightToLeft = System.Windows.Forms.RightToLeft.Yes;
            this.txt1.Size = new System.Drawing.Size(143, 39);
            this.txt1.TabIndex = 2;
            // 
            // checkBox1
            // 
            this.checkBox1.Anchor = System.Windows.Forms.AnchorStyles.Top;
            this.checkBox1.BackColor = System.Drawing.Color.Yellow;
            this.checkBox1.CheckAlign = System.Drawing.ContentAlignment.BottomCenter;
            this.checkBox1.Font = new System.Drawing.Font("휴먼편지체", 18F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(129)));
            this.checkBox1.Location = new System.Drawing.Point(13, 21);
            this.checkBox1.Margin = new System.Windows.Forms.Padding(0);
            this.checkBox1.Name = "checkBox1";
            this.checkBox1.Padding = new System.Windows.Forms.Padding(8);
            this.checkBox1.Size = new System.Drawing.Size(75, 72);
            this.checkBox1.TabIndex = 1;
            this.checkBox1.Text = "명장";
            this.checkBox1.TextAlign = System.Drawing.ContentAlignment.MiddleCenter;
            this.checkBox1.UseVisualStyleBackColor = false;
            this.checkBox1.CheckedChanged += new System.EventHandler(this.checkBox1_CheckedChanged);
            // 
            // txt7
            // 
            this.txt7.Anchor = System.Windows.Forms.AnchorStyles.Top;
            this.txt7.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(255)))), ((int)(((byte)(255)))), ((int)(((byte)(128)))));
            this.txt7.Font = new System.Drawing.Font("휴먼둥근헤드라인", 21.75F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(129)));
            this.txt7.ForeColor = System.Drawing.Color.Black;
            this.txt7.Location = new System.Drawing.Point(296, 410);
            this.txt7.MaximumSize = new System.Drawing.Size(328, 78);
            this.txt7.MinimumSize = new System.Drawing.Size(164, 39);
            this.txt7.Name = "txt7";
            this.txt7.Size = new System.Drawing.Size(164, 41);
            this.txt7.TabIndex = 24;
            // 
            // txt6
            // 
            this.txt6.Anchor = System.Windows.Forms.AnchorStyles.Top;
            this.txt6.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(255)))), ((int)(((byte)(255)))), ((int)(((byte)(128)))));
            this.txt6.Font = new System.Drawing.Font("휴먼둥근헤드라인", 21.75F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(129)));
            this.txt6.ForeColor = System.Drawing.Color.Black;
            this.txt6.Location = new System.Drawing.Point(296, 365);
            this.txt6.MaximumSize = new System.Drawing.Size(328, 78);
            this.txt6.MinimumSize = new System.Drawing.Size(164, 39);
            this.txt6.Name = "txt6";
            this.txt6.Size = new System.Drawing.Size(164, 41);
            this.txt6.TabIndex = 25;
            // 
            // label8
            // 
            this.label8.Anchor = System.Windows.Forms.AnchorStyles.Top;
            this.label8.AutoSize = true;
            this.label8.BackColor = System.Drawing.Color.Salmon;
            this.label8.Font = new System.Drawing.Font("휴먼편지체", 14.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(129)));
            this.label8.Location = new System.Drawing.Point(331, 336);
            this.label8.Name = "label8";
            this.label8.Padding = new System.Windows.Forms.Padding(2);
            this.label8.Size = new System.Drawing.Size(82, 26);
            this.label8.TabIndex = 19;
            this.label8.Text = "이득 메소";
            // 
            // label11
            // 
            this.label11.Anchor = System.Windows.Forms.AnchorStyles.Top;
            this.label11.AutoSize = true;
            this.label11.BackColor = System.Drawing.Color.PaleTurquoise;
            this.label11.Font = new System.Drawing.Font("휴먼편지체", 20.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(129)));
            this.label11.Location = new System.Drawing.Point(212, 412);
            this.label11.Name = "label11";
            this.label11.Padding = new System.Windows.Forms.Padding(2);
            this.label11.Size = new System.Drawing.Size(52, 35);
            this.label11.TabIndex = 20;
            this.label11.Text = "3%";
            // 
            // label10
            // 
            this.label10.Anchor = System.Windows.Forms.AnchorStyles.Top;
            this.label10.AutoSize = true;
            this.label10.BackColor = System.Drawing.Color.OrangeRed;
            this.label10.Font = new System.Drawing.Font("휴먼편지체", 20.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(129)));
            this.label10.Location = new System.Drawing.Point(212, 369);
            this.label10.Name = "label10";
            this.label10.Padding = new System.Windows.Forms.Padding(2);
            this.label10.Size = new System.Drawing.Size(52, 35);
            this.label10.TabIndex = 21;
            this.label10.Text = "5%";
            // 
            // label7
            // 
            this.label7.Anchor = System.Windows.Forms.AnchorStyles.Top;
            this.label7.AutoSize = true;
            this.label7.BackColor = System.Drawing.Color.Salmon;
            this.label7.Font = new System.Drawing.Font("휴먼편지체", 14.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(129)));
            this.label7.Location = new System.Drawing.Point(186, 336);
            this.label7.Name = "label7";
            this.label7.Padding = new System.Windows.Forms.Padding(2);
            this.label7.Size = new System.Drawing.Size(112, 26);
            this.label7.TabIndex = 22;
            this.label7.Text = "경매장 수수료";
            // 
            // Click
            // 
            this.Click.AllowDrop = true;
            this.Click.Anchor = System.Windows.Forms.AnchorStyles.Top;
            this.Click.AutoSize = true;
            this.Click.BackColor = System.Drawing.Color.Turquoise;
            this.Click.BackgroundImageLayout = System.Windows.Forms.ImageLayout.None;
            this.Click.Font = new System.Drawing.Font("휴먼엑스포", 16F);
            this.Click.Location = new System.Drawing.Point(23, 336);
            this.Click.MaximumSize = new System.Drawing.Size(143, 111);
            this.Click.Name = "Click";
            this.Click.Size = new System.Drawing.Size(143, 111);
            this.Click.TabIndex = 6;
            this.Click.Text = "이득 계산(Click)";
            this.Click.UseVisualStyleBackColor = false;
            this.Click.Click += new System.EventHandler(this.Click_Click_1);
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(7F, 12F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(484, 461);
            this.Controls.Add(this.txt7);
            this.Controls.Add(this.txt6);
            this.Controls.Add(this.label8);
            this.Controls.Add(this.label11);
            this.Controls.Add(this.label10);
            this.Controls.Add(this.label7);
            this.Controls.Add(this.Click);
            this.Controls.Add(this.checkBox1);
            this.Controls.Add(this.label9);
            this.Controls.Add(this.label4);
            this.Controls.Add(this.label5);
            this.Controls.Add(this.label6);
            this.Controls.Add(this.label3);
            this.Controls.Add(this.label1);
            this.Controls.Add(this.label2);
            this.Controls.Add(this.txt5);
            this.Controls.Add(this.txt4);
            this.Controls.Add(this.txt3);
            this.Controls.Add(this.txt2);
            this.Controls.Add(this.txt1);
            this.Controls.Add(this.pictureBox1);
            this.Icon = ((System.Drawing.Icon)(resources.GetObject("$this.Icon")));
            this.MaximumSize = new System.Drawing.Size(1000, 1000);
            this.MinimizeBox = false;
            this.MinimumSize = new System.Drawing.Size(500, 500);
            this.Name = "Form1";
            this.Text = "큐브장사 이득 계산기";
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox1)).EndInit();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.PictureBox pictureBox1;
        private System.Windows.Forms.Label label9;
        private System.Windows.Forms.Label label4;
        private System.Windows.Forms.Label label5;
        private System.Windows.Forms.Label label6;
        private System.Windows.Forms.Label label3;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.TextBox txt5;
        private System.Windows.Forms.TextBox txt4;
        private System.Windows.Forms.TextBox txt3;
        private System.Windows.Forms.TextBox txt2;
        private System.Windows.Forms.TextBox txt1;
        private System.Windows.Forms.CheckBox checkBox1;
        private System.Windows.Forms.TextBox txt7;
        private System.Windows.Forms.TextBox txt6;
        private System.Windows.Forms.Label label8;
        private System.Windows.Forms.Label label11;
        private System.Windows.Forms.Label label10;
        private System.Windows.Forms.Label label7;
        private System.Windows.Forms.Button Click;
    }
}


using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace 메이플_순수익_계산기
{
    public partial class Form1 : Form
    {
        public static int ChoisangNUM = 20;
        public static int CubepaNUM = 5;
        public Form1()
        {
            InitializeComponent();
        }

        private void pictureBox1_Click(object sender, EventArgs e)
        {

        }
        private void Click_Click_1(object sender, EventArgs e)
        {
            int Hondon, Choisang, ChoigoYeonma, Cubepa, Jangcube;

            if (!int.TryParse(txt1.Text, out Hondon)
                || !int.TryParse(txt2.Text, out Choisang)
                || !int.TryParse(txt3.Text, out ChoigoYeonma)
                || !int.TryParse(txt4.Text, out Cubepa)
                || !int.TryParse(txt5.Text, out Jangcube)
                )
                MessageBox.Show("   숫자를 입력하세요!");
            else
            {
                int sumresult1 = (Jangcube - Jangcube * 5 / 100) - ((Hondon * 5) + (Choisang * ChoisangNUM) + (ChoigoYeonma) + Cubepa * CubepaNUM);
                txt6.Text = string.Format("{0}", sumresult1.ToString("#,##0"));

                int sumresult2 = (Jangcube - Jangcube * 3 / 100) - ((Hondon * 5) + (Choisang * ChoisangNUM) + (ChoigoYeonma) + Cubepa * CubepaNUM);
                txt7.Text = string.Format("{0}", sumresult2.ToString("#,##0"));
                MessageBox.Show("      계산성공");
            }
        }
        private void checkBox1_CheckedChanged(object sender, EventArgs e)
        {
            string i = "750000";
            string j = "500000";
            if (checkBox1.Checked)
            {
                ChoisangNUM = 30;
                txt3.Text = i.ToString();
                CubepaNUM = 10;
                label2.Text = "강력한 혼돈의 칼날 x5";                
                label3.Text = "최상급 아이템결정 x30";
                label4.Text = "최고급 연마제 x10";
                label5.Text = "큐브의파편 x10";
                label6.Text = "명큐시세";
            }
            else
            {
                ChoisangNUM = 20;
                txt3.Text = j.ToString();
                CubepaNUM = 5;
                label2.Text = "혼돈의 칼날 x5";                
                label3.Text = "최상급 아이템결정 x20";
                label4.Text = "최고급 연마제 x5";
                label5.Text = "큐브의파편 x5";
                label6.Text = "장큐시세";
            }
        }
    }
}

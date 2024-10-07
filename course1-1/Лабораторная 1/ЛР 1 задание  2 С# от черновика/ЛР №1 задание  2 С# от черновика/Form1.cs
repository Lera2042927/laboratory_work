using System.Diagnostics.Eventing.Reader;

namespace ЛР__1_задание__2_С__от_черновика
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }

        private void label1_Click(object sender, EventArgs e)
        {

        }

        private void pictureBox1_Click(object sender, EventArgs e)
        {

        }

        private void label3_Click(object sender, EventArgs e)
        {

        }

        private void label5_Click(object sender, EventArgs e)
        {

        }

        private void CalculateBtn_Click(object sender, EventArgs e)
        {
            double x = Convert.ToDouble(textBoxX.Text);
            double b = Convert.ToDouble(textBoxB.Text);
            double a = Convert.ToDouble(textBoxA.Text);
            double z = 0;
            if ((0 <= x) & (x < 1) & (a > 0) & (b < 0))
            {

                label6.Text += " Условие 1  ";
                Console.Write(" Условие 1 ");
                Console.Write("Ограничение: 1) exp(x)+cos(x)!=0 ");
                if (Math.Exp(x) + Math.Cos(x) != 0)
                {
                    z = (a + b) / (Math.Exp(x) + Math.Cos(x));
                }
                else Console.Write("Ограничения не выполняются! ");


            }
            else
                if ((1 <= x) && (x < 5) && (a > 0) && (b > 0))
            {
                label6.Text = " Условие 2 ";
                Console.Write("Ограничение: 1) (x+1)!=0 ");
                if ((x + 1) != 0)
                {
                    z = (a + b) / (x + 1);
                }
                else Console.Write("Ограничения не выполняются! ");
            }
            else
                if ((5 <= x) && (x <= 7))
            {

                label6.Text = " Условие 3 ";
                Console.Write(" Условие 3 ");
                Console.Write("Ограничение: 1) 1) exp(-x)!=0 ");
                if (Math.Exp(-x) != 0)
                {
                    z = (Math.Exp(-x) + Math.Sin(a * x));
                }
                else Console.Write("Ограничения не выполняются! ");
            }
            else

            {
                label6.Text = " Условие 4 ";
                z = x + b + a;
            }
            ResultLabel.Text = "Результат: " + String.Format("{0:0.####E+00}", z);
        }

        private void label6usl_Click(object sender, EventArgs e)
        {

        }

        private void ResultLabel_Click(object sender, EventArgs e)
        {

        }
    }
}

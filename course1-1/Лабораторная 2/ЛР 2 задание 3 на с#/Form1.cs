using System.Windows.Forms;

namespace ЛР_2_задание_3_на_с_
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void CalculateBtn_Click(object sender, EventArgs e)
        {
            double f(int n)
            {
                return Math.Pow(n, 2) / Math.Pow(2 + 1 / n, n);
                
            }
            double precision = Convert.ToDouble(textBoxE.Text);
            double pr;
            double tc;
            double sum;
            int n = 1;

            tc = f(n);
            sum = tc;
            do
            {
                n++;
                pr = tc;
                tc = f(n);
                sum += tc;
                var ste = pr.ToString("0.##########");
                listBox1.Items.Add(ste);
            } while (Math.Abs(tc - pr) > precision);
            Resultlabel.Text = "Результат: " + String.Format("{0:0.000000000}", sum);
            textBoxN.Text = n.ToString();



        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }

        private void label4_Click(object sender, EventArgs e)
        {

        }

        private void label5_Click(object sender, EventArgs e)
        {

        }
    }
}

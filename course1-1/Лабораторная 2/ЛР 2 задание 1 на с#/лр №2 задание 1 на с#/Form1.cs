namespace лр__2_задание_1_на_с_
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void listBox2_SelectedIndexChanged(object sender, EventArgs e)
        {

        }

        private void button1_Click(object sender, EventArgs e)
        {
            double f(double x)
            {
                if (x < -1)
                {
                    return Math.Pow(x, Math.Exp(1)) * (Math.Sin(x) - Math.Cos(x)) / 2;
                }
                else if (x >= -1 && x <= 0)
                {
                    return (Math.Exp(x) * Math.Cos(x) - 1) / 2;
                }
                else
                {
                    return Math.Pow(x, 2) * Math.Sin(2 * x);
                }
            }

            double a = Convert.ToDouble(textBoxA.Text);
            double b = Convert.ToDouble(textBoxB.Text);
            double h = Convert.ToDouble(textBoxH.Text);


            for (double x = a; x <= b; x += h)
            {
                double y = f(x); // вычисление y для текущего x
                var str = x.ToString("0.###");
                listBox1.Items.Add(str);
                var ste = y.ToString("0.###");
                listBox2.Items.Add(ste);
            }





        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }
    }
}

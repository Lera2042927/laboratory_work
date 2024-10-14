namespace ЛР_2_задание_2_на_с_
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void CalculateBtn_Click(object sender, EventArgs e)
        {
            double x1 = 1;
            double y1 = 0.14;
            double x2;
            double y2;

            for (int i = 2; i <= 20; i++)
            {
                x2 = x1 + y1;
                var str = x2.ToString("0.###");
                listBox1.Items.Add(str);

                y2 = y1 + Math.Sin(x1) - 0.5 * x2;
                var ste = y2.ToString("0.###");
                listBox2.Items.Add(ste);

                x1 = x2; y1 = y2;

            }
        }
    }
}

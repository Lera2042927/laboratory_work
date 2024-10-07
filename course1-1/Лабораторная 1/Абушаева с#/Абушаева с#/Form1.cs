namespace Абушаева_с_
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

        private void CalculateBtn_Click(object sender, EventArgs e)
        {// Обработчик собития "Click" кнопки
            double x = Convert.ToDouble(textBoxX.Text);
            double y = Convert.ToDouble(textBoxY.Text);
            double z = Convert.ToDouble(textBoxZ.Text);
            double p = Math.Sin(y / (x + Math.Cos(Math.Pow(y, 2)))) / (y - 3 + Math.Pow(((y - 3) / Math.Sin(z)), 1.0 / 5.0));
            ResultLabel.Text = "Результат: " + String.Format("{0:0.####E+00}", p);
        }

        private void ResultLabel_Click(object sender, EventArgs e)
        {

        }

        private void label3_Click(object sender, EventArgs e)
        {

        }

        private void textBoxZ_TextChanged(object sender, EventArgs e)
        {

        }

        private void textBoxX_TextChanged(object sender, EventArgs e)
        {

        }
    }
}

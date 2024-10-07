namespace ЛР__1__3_с_______
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
            listBox1.SelectedIndex = 0;
            listBox2.SelectedIndex = 0;
            listBox3.SelectedIndex = 0;
            listBox4.SelectedIndex = 0;
        }

        private void button1_Click(object sender, EventArgs e)
        {
            int s = 0;
            if (listBox1.SelectedIndex != -1)
            {
                int pr; pr = Convert.ToInt16(listBox1.SelectedIndex);
                switch (pr)
                {
                    case (0):
                        { s += 5000;  break; }
                    case (1):
                        { s += 6000;  break; }

                }
            }
            if (listBox2.SelectedIndex != -1)
            {
                int ras; ras = Convert.ToInt32(listBox2.SelectedIndex);
                switch (ras)
                {
                    case (0):
                        { s += 7000;  break; }
                    case (1):
                        { s += 8000;  break; }

                }
            }
            if (listBox3.SelectedIndex != -1)
            {
                int r; r = Convert.ToInt16(listBox3.SelectedIndex);
                switch (r)
                {
                    case (0):
                        { s += 9000;  break; }
                    case (1):
                        { s += 10000;  break; }

                }
            }
            if (listBox4.SelectedIndex != -1)
            {
                int ch; ch = Convert.ToInt16(listBox4.SelectedIndex);
                switch (ch)
                {
                    case (0):
                        { s += 11000;  break; }
                    case (1):
                        { s += 12000; break; }

                }
            }
            MessageBox.Show($"Стоимость монитора:{s} рублей");
        }

        private void labelResult_Click(object sender, EventArgs e)
        {

        }

        private void label6_Click(object sender, EventArgs e)
        {

        }
    }
}

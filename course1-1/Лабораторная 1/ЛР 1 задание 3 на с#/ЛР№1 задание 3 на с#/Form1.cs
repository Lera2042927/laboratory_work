namespace ЛР_1_задание_3_на_с_
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void listBox1_SelectedIndexChanged(object sender, EventArgs e)
        {
            if (listBox1.SelectedIndex!=-1)
            {
                int pr; pr = Convert.ToInt16(listBox1.SelectedItem);
                switch (pr)
                {
                case (1):
                {MessageBox.Show("1-Samsung"); break; }
                    case (2):
                        { MessageBox.Show(" 2-Dell"); break; }

                }
            }
        }

        private void listBox2_SelectedIndexChanged(object sender, EventArgs e)
        {
            if (listBox2.SelectedIndex != -1)
            {
                int ras; ras = Convert.ToInt16(listBox2.SelectedItem);
                switch (ras)
                {
                    case (1):
                        { MessageBox.Show("1-14"); break; }
                    case (2):
                        { MessageBox.Show("2-15"); break; }

                }
            }
        }

        private void listBox3_SelectedIndexChanged(object sender, EventArgs e)
        {
            if (listBox3.SelectedIndex != -1)
            {
                int r; r = Convert.ToInt16(listBox3.SelectedItem);
                switch (r)
                {
                    case (1):
                        { MessageBox.Show("1-720*1280"); break; }
                    case (2):
                        { MessageBox.Show("2-520*1280"); break; }

                }
            }
        }

        private void listBox4_SelectedIndexChanged(object sender, EventArgs e)
        {
            if (listBox4.SelectedIndex != -1)
            {
                int ch; ch = Convert.ToInt16(listBox4.SelectedItem);
                switch (ch)
                {
                    case (1):
                        { MessageBox.Show("1-60"); break; }
                    case (2):
                        { MessageBox.Show("2-120"); break; }

                }
            }
        }
    }
}

namespace Лабораторная_4_задание_2_на_c_
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void textBox1_TextChanged(object sender, EventArgs e)
        {

        }

        private void CalculateBtn_Click(object sender, EventArgs e)
        {
            int min_limit = Convert.ToInt16(textBox_Min_limit.Text);
            int max_limit = Convert.ToInt16(textBox_Max_limit.Text);
            int k_row = Convert.ToInt16(textBoxK.Text);
            int l_col = Convert.ToInt16(textBoxL.Text);
            int[,] arr = new int[1000, 1000];
            Random rand = new Random();

            int[] B = new int[k_row];
            int[] C = new int[l_col];

            for (int i = 0; i < k_row; i++)
            {
                for (int j = 0; j < l_col; j++)
                {
                    arr[i, j] = rand.Next(min_limit, max_limit + 1); // Заполнение массива
                }
            }
            // Отображение массива в DataGridView
            dataGridView1.ColumnCount = l_col;
            dataGridView1.RowCount = k_row;
            for (int i = 0; i < k_row; i++)
            {
                for (int j = 0; j < l_col; j++)
                {
                    dataGridView1.Rows[i].HeaderCell.Value = (i + 1).ToString();
                    dataGridView1.Columns[j].HeaderCell.Value = (j + 1).ToString();
                    dataGridView1.Rows[i].Cells[j].Value = arr[i, j];
                }
            }

            // Подсчет положительных и отрицательных элементов
            listBox1.Items.Clear();
            listBox2.Items.Clear();

            for (int i = 0; i < k_row; i++)
            {
                B[i] = Enumerable.Range(0, l_col).Count(j => arr[i, j] > 0); // подсчет положительных
                C[i] = Enumerable.Range(0, l_col).Count(j => arr[i, j] < 0); // подсчет отрицательных
            }
            var positiveInFirstRow = Enumerable.Range(0, l_col)
           .Select(j => arr[0, j])
           .Where(x => x > 0)
           .ToList();


            // Добавление результатов в ListBox после подсчета
            for (int i = 0; i < k_row; i++)
            {
                listBox1.Items.Add(B[i]);
                listBox2.Items.Add(C[i]);
            }


        }
    }
}

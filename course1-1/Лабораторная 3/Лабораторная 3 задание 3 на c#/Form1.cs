namespace Лабораторная_3_задание_3_на_c_
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void label2_Click(object sender, EventArgs e)
        {

        }

        private void label3_Click(object sender, EventArgs e)
        {

        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }

        private void dataGridView1_CellContentClick(object sender, DataGridViewCellEventArgs e)
        {

        }

        private void CalculateBtn_Click(object sender, EventArgs e)
        {
            int MIN_LIMIT = -10;
            int MAX_LIMIT = 10;
            int n = Convert.ToInt16(textBoxN.Text);
            int numbers_count;
            numbers_count = n * n;
            double[] numbers = new double[numbers_count];
            double[,] matrix = new double[n, n];

            int[,] arr = new int[1000, 1000];
            Random rand = new Random();

            for (int i = 0; i < numbers_count; i++)
            {
                numbers[i] = MIN_LIMIT + rand.NextDouble() * (MAX_LIMIT - MIN_LIMIT);
            }


            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    arr[i, j] = rand.Next(n + 1); // Заполнение массива
                }
            }
            // Сортировка чисел по убыванию (вставками)
            for (int i = 1; i < numbers_count; i++)
            {
                double key = numbers[i];
                int j = i - 1;
                while (j >= 0 && numbers[j] < key)
                {
                    numbers[j + 1] = numbers[j];
                    j--;
                }
                numbers[j + 1] = key;
            }

            // Отображение последовательности в ListBox
            listBoxN.Items.Clear();
            foreach (var number in numbers)
            {
                listBoxN.Items.Add(number);
            }



            // Заполнение матрицы числами по схеме
            // step +1 или -1 для смены направления движения
            int step = 1;
            int row = 0;
            int col = 0;
            for ( int i = 0; i < numbers_count; i++)
            {
                matrix[row,col] = numbers[i];
                col += step;
                row -= step;
                if (col >= n)
                {
                    col--;
                    row += 2;
                    step = -step;
                }
                else if (row >= n)
                {
                    row--;
                    col += 2;
                    step = -step;
                }
                else if (col < 0)
                {
                    col = 0;
                    step = -step;
                }
                else if (row < 0)
                {
                    row = 0;
                    step = -step;
                }
            }

            // Отображение матрицы в DataGridView
            dataGridView1.ColumnCount = n;
            dataGridView1.RowCount = n;
            for (int i = 0; i < n; i++)
            {
                dataGridView1.Rows[i].HeaderCell.Value = (i + 1).ToString();
                dataGridView1.Columns[i].HeaderCell.Value = (i + 1).ToString();
                for (int j = 0; j < n; j++)
                {
                    dataGridView1.Rows[i].Cells[j].Value = matrix[i, j];
                }
            }
        }
    }
}

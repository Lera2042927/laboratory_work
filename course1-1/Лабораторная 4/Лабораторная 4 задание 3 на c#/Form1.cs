namespace Лабораторная_4_задание_3_на_c_
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void CalculateBtn_Click(object sender, EventArgs e)
        {
            int MIN_LIMIT = -10;
            int MAX_LIMIT = 10;
            int n = Convert.ToInt16(textBoxN.Text);
            int numbers_count;
            numbers_count = n * n;
            double[] numbers = new double[numbers_count];
            //double[,] matrix = new double[n, n];


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

                // Сортировка чисел по убыванию
                // Сортировка чисел по убыванию
                Array.Sort(numbers);
                Array.Reverse(numbers);

                // Создание квадратной матрицы
                double[,] matrix = new double[n, n];

                // Заполнение матрицы по схеме
                int index = 0;
                for (int a = 0; a < n; a++)
                {
                    for (int j = 0; j < n; j++)
                    {
                        if ((a + j) % 2 == 0)
                        {
                            matrix[a, j] = numbers[index++];
                        }
                    }
                }

                // Отображение последовательности в ListBox
                listBoxN.Items.Clear();
                foreach (var number in numbers)
                {
                    listBoxN.Items.Add(number);
                }

                // Заполнение матрицы числами по схеме
                // step +1 или -1 для смены направления движения
                int min_row = 0;
                int min_col = 0;
                int step = 1;
                int row = 0;
                int col = 0;
                for (int b = 0; b < numbers_count; b++)
                {
                    matrix[row, col] = numbers[b];
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
                for (int c = 0; c < n; c++)
                {
                    for (int j = 0; j < n; j++)
                    {
                        dataGridView1.Rows[c].HeaderCell.Value = (c + 1).ToString();
                        dataGridView1.Columns[j].HeaderCell.Value = (j + 1).ToString();
                        dataGridView1.Rows[c].Cells[j].Value = matrix[c, j];
                    }
                }


            }
        }
    }
}
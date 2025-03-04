using System.Windows.Forms;

namespace Лабораторная_7_задание_4_от_лр_5_задания_1_на_c_
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

        private void button1_Click(object sender, EventArgs e)
        {

            int minLimit = Convert.ToInt32(textBoxMin_limit.Text);
            int maxLimit = Convert.ToInt32(textBoxMax_limit.Text);
            int n = Convert.ToInt32(textBoxN.Text);

            int[] Y = GenerateRandomArray(n, minLimit, maxLimit);
            double[] X = GenerateDuplicatedArray(Y, minLimit, maxLimit);

            PopulateDataGridView(dataGridView1, Y);
            PopulateDataGridView(dataGridView2, X);


        }

        private int[] GenerateRandomArray(int n, int minLimit, int maxLimit)//создаёт массив случайных чисел
        {
            Random rand = new Random();
            int[] Y = new int[n];
            for (int i = 0; i < n; i++)
            {
                Y[i] = rand.Next(minLimit, maxLimit);
            }
            return Y;
        }

        private double[] GenerateDuplicatedArray(int[] Y, int minLimit, int maxLimit)//принимает массив У, возвращает массив Х,где каждое значение из У повторяется определённое количество раз 
        {
            Random rand = new Random();
            int totalCount = 0;

            foreach (int y in Y)
            {
                totalCount += y;
            }

            double[] X = new double[totalCount];
            int offset = 0;
            for (int i = 0; i < Y.Length; i++)
            {
                double x = rand.NextDouble() * (maxLimit - minLimit) + minLimit;
                for (int j = 0; j < Y[i]; j++)
                {
                    X[offset] = x;
                    offset++;
                }
            }
            return X;
        }

        private void PopulateDataGridView(DataGridView dataGridView, Array array) // заполняет таблицу элементами из массива, очищает текущие столбцы, добавляет новый столбец
        {
            dataGridView.Columns.Clear();
            dataGridView.Columns.Add("Column1", "Элементы массива");

            foreach (var item in array)
            {
                dataGridView.Rows.Add(item);
            }
        }

        private void label7_Click(object sender, EventArgs e)
        {

        }

        private void label8_Click(object sender, EventArgs e)
        {

        }

        private void label3_Click(object sender, EventArgs e)
        {

        }
    }

}
    

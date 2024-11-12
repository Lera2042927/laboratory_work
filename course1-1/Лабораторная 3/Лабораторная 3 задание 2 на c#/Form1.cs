using System.Windows.Forms;

namespace Лабораторная_3_задание_2_на_c_
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

        private void button1_Click(object sender, EventArgs e)
        { 
            int min_limit = Convert.ToInt16(textBox_Min_limit.Text);
            int max_limit = Convert.ToInt16(textBox_Max_limit.Text);
            int k_row = Convert.ToInt16(textBoxK.Text);
            int l_col = Convert.ToInt16(textBoxL.Text);
            int[,] arr = new int[1000,1000];
            Random rand = new Random();

            int[] B = new int[1000];
            int[] C = new int[1000];


            
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
            // Заполнение хидера колонок
            for (int i = 0; i < l_col; i++)
                dataGridView1.Columns[i].HeaderCell.Value = (i + 1).ToString();

            // Заполнение таблицы
            for (int i = 0; i < k_row; i++)
            {
                // Номера строк
                dataGridView1.Rows[i].HeaderCell.Value = (i + 1).ToString();
                // Данные
                for (int j = 0; j < l_col; j++)
                {
                    dataGridView1.Rows[i].Cells[j].Value = arr[i, j];
                }
            }
         
            // Подсчет положительных и отрицательных элементов
            listBox1.Items.Clear();
            listBox2.Items.Clear();
            for ( int i = 0; i < k_row; i++)
            {
                for (int j = 0; j < l_col; j++)
                {
                    if (arr[i,j] > 0)
                    {
                        B[i]++;
                        /*var str = B[i].ToString("0.###");
                        listBox1.Items.Add(str);*/
                    }
                    else if (arr[i,j] < 0)
                    {
                        C[i]++;
                        /*var ste = C[i].ToString("0.###");
                        listBox2.Items.Add(ste);*/
                    }
                }
            }
            // Добавление результатов в ListBox после подсчета
            for (int i = 0; i < k_row; i++)
            {
                listBox1.Items.Add(B[i]);
                listBox2.Items.Add(C[i]);
            }
        }
    }
}

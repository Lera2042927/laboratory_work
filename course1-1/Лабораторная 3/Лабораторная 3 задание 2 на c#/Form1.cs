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
            for (int i = 0; i < k_row; i++)
            {
                for (int j = 0; j < l_col; j++)
                {
                    dataGridView1.Rows[i].Cells[j].Value = arr[i, j];
                }
            }
            /* var column1 = new DataGridViewColumn();
             column1.HeaderText = "Элементы массива";
             column1.CellTemplate = new DataGridViewTextBoxCell();
             dataGridView1.Columns.Add(column1);*/

            /* for (int j = 0; j < l_col; j ++)
             {   //var column1 = new DataGridViewColumn();
                 int colIndex = dataGridView1.Columns.Add();
                 arr[0,j] = rand.Next(min_limit, max_limit);
                 dataGridView1.Columns[j].HeaderCell.Value = (j + 1).ToString();
                 dataGridView1[0, j].Value = arr[0,j];
             }*/


            /*for (int i = 0; i < k_row; i++)
            {
                int rowIndex = dataGridView1.Rows.Add();
                arr[i,0] = rand.Next(min_limit, max_limit);
                dataGridView1.Rows[i].HeaderCell.Value = (i + 1).ToString();
                dataGridView1[0, i].Value = arr[i,0];
            }*/

            // Подсчет положительных и отрицательных элементов
            for ( int i = 0; i < k_row; i++)
            {
                for (int j = 0; j < l_col; j++)
                {
                    if (arr[i,j] > 0)
                    {
                        B[i]++;
                        var str = B[i].ToString("0.###");
                        listBox1.Items.Add(str);
                    }
                    else if (arr[i,j] < 0)
                    {
                        C[i]++;
                        var ste = C[i].ToString("0.###");
                        listBox2.Items.Add(ste);
                    }
                }
            }





            



        }
    }
}

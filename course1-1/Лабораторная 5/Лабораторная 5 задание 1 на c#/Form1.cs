using System.Drawing;
using System.Security.Policy;
using System.Windows.Forms;

namespace Лабораторная_5_задание_1_на_c_
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

        private void Form1_Load(object sender, EventArgs e)
        {
           

        }

        private void CalculateBtn_Click(object sender, EventArgs e)
        {

            int min_limit = Convert.ToInt16(textBoxMin_limit.Text);
            int max_limit = Convert.ToInt16(textBoxMax_limit.Text);
            int n = Convert.ToInt16(textBoxN.Text);

            
            int[] Y = new int[n];
            Random rand = new Random();
            int totalCount = 0; //макс кол-во элементов массива Х
            for (int i = 0; i < n; i++)
            {
                int y = rand.Next(min_limit, max_limit);
                Y[i] = y;
                totalCount += y;
            }

            dataGridViewY.Columns.Clear();
            var column1 = new DataGridViewColumn();
            column1.HeaderText = "Элементы массива";
            column1.CellTemplate = new DataGridViewTextBoxCell();
            dataGridViewY.Columns.Add(column1);

            for (int i = 0; i < n; i++)
            {
                int rowIndex = dataGridViewY.Rows.Add();
                dataGridViewY.Rows[i].HeaderCell.Value = (i + 1).ToString();
                dataGridViewY[0, i].Value = Y[i];
                //totalCount += y;// Y;
            }

            double[] X = new double[totalCount];
            int offset = 0; // смещение текущего вещественного числа в массиве Х (от начала массива)
            for (int i = 0; i < n; i++)
            {
                double x = rand.Next(min_limit, max_limit);

                for (int j = 0; j < Y[i]; j++) //дублируем столькр раз, сколько указанно в Y[i]
                {
                    X[offset] = x;
                    offset++;
                }

            }

            dataGridViewX.Columns.Clear();
            var column2 = new DataGridViewColumn();
            column2.HeaderText = "Элементы массива";
            column2.CellTemplate = new DataGridViewTextBoxCell();
            dataGridViewX.Columns.Add(column2);

            for (int i = 0; i < totalCount; i++)
            {
                int rowIndex = dataGridViewX.Rows.Add();
                dataGridViewX.Rows[i].HeaderCell.Value = (i + 1).ToString();
                dataGridViewX[0, i].Value = X[i];
           

            }
            int stop = 0;
            // Заполнение DataGridView для X(N) и Y(N)
            //dataGridViewX.Rows.Clear();
            //dataGridViewY.Rows.Clear();


           // dataGridViewResult.Rows.Clear();
            //
            //dataGridViewResult.Columns.Clear();
            /* var column3 = new DataGridViewColumn();
             //column3.HeaderText = "Элементы исходного массива";
             column3.CellTemplate = new DataGridViewTextBoxCell();
             dataGridViewResult.Columns.Add(column3);

             int[,] result = new int[1000, 1000];
             for (int i = 0; i < X.Length; i++)
             {
                 for (int j = 0; j < Y[i]; j++)
                 {
                     dataGridViewResult.Rows.Add(X[i]);
                 }
             }*/

        }
    }
}

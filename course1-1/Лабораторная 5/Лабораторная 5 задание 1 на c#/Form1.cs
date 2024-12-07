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
           /* int min_limit = Convert.ToInt16(textBoxMin_limit.Text);
            int max_limit = Convert.ToInt16(textBoxMax_limit.Text);
            int n = Convert.ToInt16(textBoxN.Text);
            double[] X = new double[n];
            int[] Y = new int[n];
            Random rand = new Random();

            dataGridViewX.Columns.Clear();
            var column1 = new DataGridViewColumn();
            //column1.HeaderText = "Элементы исходного массива";
            column1.CellTemplate = new DataGridViewTextBoxCell();
            dataGridViewX.Columns.Add(column1);

            for (int i = 0; i < n; i++)
            {
                double rowIndex = dataGridViewX.Rows.Add();
                X[i] = rand.Next(min_limit, max_limit);
                dataGridViewX.Rows[i].HeaderCell.Value = (i + 1).ToString();
                dataGridViewX[0, i].Value = X[i];
            }

            dataGridViewY.Columns.Clear();
            var column2 = new DataGridViewColumn();
            //column2.HeaderText = "Элементы исходного массива";
            column2.CellTemplate = new DataGridViewTextBoxCell();
            dataGridViewY.Columns.Add(column2);

            for (int i = 0; i < n; i++)
            {
                int rowIndex = dataGridViewY.Rows.Add();
                Y[i] = rand.Next(min_limit, max_limit);
                dataGridViewY.Rows[i].HeaderCell.Value = (i + 1).ToString();
                dataGridViewY[0, i].Value = Y[i];
            }
         


            // Заполнение DataGridView для X(N) и Y(N)
            dataGridViewX.Rows.Clear();
            dataGridViewY.Rows.Clear();


            dataGridViewResult.Rows.Clear();
            dataGridViewResult.Columns.Clear();
            var column3 = new DataGridViewColumn();
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
            }
           */





        }
    }
}

using System.Drawing;

namespace Лабораторная_5_задание_3_на_c_
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            int min_limit = Convert.ToInt16(textBoxMin_limit.Text);
            int max_limit = Convert.ToInt16(textBoxMax_limit.Text);
            int n = Convert.ToInt16(textBoxN.Text);


            int[] X = new int[n];
            Random rand = new Random();
            for (int i = 0; i < n; i++)
            {
                X[i] = rand.Next(min_limit, max_limit); //диапазон
            }

            dataGridView1.Columns.Clear();
            var column1 = new DataGridViewColumn();
            column1.HeaderText = "Элементы исходного массива";
            column1.CellTemplate = new DataGridViewTextBoxCell();
            dataGridView1.Columns.Add(column1);

            for (int i = 0; i < n; i++)
            {
                int rowIndex = dataGridView1.Rows.Add();
                dataGridView1.Rows[i].HeaderCell.Value = (i + 1).ToString();
                dataGridView1[0, i].Value = X[i];
            }

            // Удаление элементов, кратных 3, 4 и 5
            int[] filteredArray = X.Where(x => x % 3 != 0 && x % 4 != 0 && x % 5 != 0).ToArray();
            dataGridView2.Columns.Clear();
            var column2 = new DataGridViewColumn();
            column2.HeaderText = "Элементы результирующего массива";
            column2.CellTemplate = new DataGridViewTextBoxCell();
            dataGridView2.Columns.Add(column2);

            for (int i = 0; i < filteredArray.Length; i++)
            {
                int rowIndex = dataGridView2.Rows.Add();
                dataGridView2.Rows[rowIndex].HeaderCell.Value = (i + 1).ToString();
                dataGridView2[0, i].Value = filteredArray[i];
            }



        }
    }
}

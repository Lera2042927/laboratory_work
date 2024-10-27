using System.Data;
using System.DirectoryServices;
using System.Windows.Forms;

namespace Лабораторная_3_задание_1_на_с_
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void CalculateBtn_Click(object sender, EventArgs e)
        {
            int n = Convert.ToInt16(textBoxN.Text);
            int min_limit = Convert.ToInt16(textBoxMin_limit.Text);
            int max_limit = Convert.ToInt16(textBoxMax_limit.Text);
            int[] arr = new int[1000];
            Random rand = new Random();

            var column1 = new DataGridViewColumn();
            column1.HeaderText = "Элементы исходного массива";
            column1.CellTemplate = new DataGridViewTextBoxCell();
            DataGridView1.Columns.Add(column1);

            for (int i = 0; i < n; i++)
            {
                int rowIndex = DataGridView1.Rows.Add();
                arr[i] = rand.Next(min_limit, max_limit);
                DataGridView1.Rows[i].HeaderCell.Value = (i + 1).ToString();
                DataGridView1[0, i].Value = arr[i];                
            }

            int Index_of_max_value = 0; // для индекса максимального элемента
            for (int i = 1; i < n; i++)
                if (arr[i] > arr[Index_of_max_value]) Index_of_max_value = i;

            int positive_value = 0; // для суммы положительных элементов массива
            for (int i = Index_of_max_value + 1; i < n; i++)
            {
                int x = arr[i];
                if (x > 0) positive_value += x;
            }

            int negative_value = 0; // для суммы отрицательных элементов массива
            for (int i = 0; i < Index_of_max_value; i++)
            {
                int x = arr[i];
                if (x < 0) negative_value += x;
            }

            textBoxMaxValue.Text = arr[Index_of_max_value].ToString();
            textBoxPositive_Sum.Text = positive_value.ToString();
            textBoxNegative_Sum.Text= negative_value.ToString();

        }

        private void dataGridView1_CellContentClick(object sender, DataGridViewCellEventArgs e)
        {

        }

        private void dataGridView2_CellContentClick(object sender, DataGridViewCellEventArgs e)
        {

        }

        private void label9_Click(object sender, EventArgs e)
        {

        }

        private void textBox2_TextChanged(object sender, EventArgs e)
        {

        }

        private void textBoxPol_Sum_TextChanged(object sender, EventArgs e)
        {

        }
    }
}

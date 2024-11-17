using System.Windows.Forms;

namespace Лабораторная_4_задание_1_на_c_
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void CalculateBtn_Click(object sender, EventArgs e)
        {
            int size  = Convert.ToInt16(textBoxN.Text);
            int min_limit = Convert.ToInt16(textBoxMin_limit.Text);
            int max_limit = Convert.ToInt16(textBoxMax_limit.Text);
            int[] arr = new int[size];
            Random rand = new Random();

            dataGridView1.Columns.Clear();
            var column1 = new DataGridViewColumn();
            column1.HeaderText = "Элементы исходного массива";
            column1.CellTemplate = new DataGridViewTextBoxCell();
            dataGridView1.Columns.Add(column1);

            for (int i = 0; i < size; i++)
            {
                int rowIndex = dataGridView1.Rows.Add();
                arr[i] = rand.Next(min_limit, max_limit);
                dataGridView1.Rows[i].HeaderCell.Value = (i + 1).ToString();
                dataGridView1[0, i].Value = arr[i];
            }



            int maxIndex = Array.IndexOf(arr, arr.Max());
            /*t Index_of_max_value = 0;  для индекса максимального элемента
            for (int i = 1; i < arr.Length; i++)
                if (arr[i] > arr[Index_of_max_value]) Index_of_max_value = i;*/

            int positive_value = 0; // для суммы положительных элементов массива
            for (int i = maxIndex + 1; i < arr.Length; i++)
            {
                int x = arr[i];
                if (x > 0) positive_value += x;
            }

            int negative_value = 0; // для суммы отрицательных элементов массива
            for (int i = 0; i < maxIndex; i++)
            {
                int x = arr[i];
                if (x < 0) negative_value += x;
            }

            textBoxMaxValue.Text = arr[maxIndex].ToString();
            textBoxPositive_Sum.Text = positive_value.ToString();
            textBoxNegative_Sum.Text = negative_value.ToString();


        }
    }
}

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
            int[] Positiv_array = new int[size-maxIndex];   //иначе +1
           
            //Array.Copy(arr,maxIndex+1, Positiv_array,0,size-maxIndex);// копировать все числа после макс

            int j = 0;
            for (int i = maxIndex + 1; i < arr.Length; i++)
            {
                if (arr[i] > 0)
                {
                    Array.Copy(arr, i, Positiv_array, j, 1); // 
                    j++;
                }
            }
            int positive_sum = Positiv_array.Sum(); // для суммы положительных элементов массива

            int[] Negativ_array = new int[maxIndex];
            //Array.Copy(arr, 0 , Negativ_array, 0 ,maxIndex-1);


             j = 0;
            for (int i = 0; i < maxIndex; i++)
            {
                if (arr[i] < 0)
                {
                    Array.Copy(arr, i, Negativ_array, j, 1); // 
                    j++;
                }
            }
            int negative_sum = Negativ_array.Sum(); // для суммы отрицательных элементов массива


            textBoxMaxValue.Text = arr[maxIndex].ToString();
            textBoxPositive_Sum.Text = positive_sum.ToString();
            textBoxNegative_Sum.Text = negative_sum.ToString();


        }
    }
}

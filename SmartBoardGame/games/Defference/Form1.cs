using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Defference
{
    public partial class Form1 : Form
    {
        public String[] images = { "bin\\first.png", "bin\\second.png", "bin\\third.png", "bin\\fourth.png", "bin\\fifth.png" };
        public int index = 0;
        public int[] remains = {0,0,0,0,0};
        public Form1()
        {
            InitializeComponent();
        
            //first image

            pictureBox1.Image = Image.FromFile(images[index]);
          
        }

        private void Preview_Click(object sender, EventArgs e)
        {
            index--;
            if (index < 0)
                index = 4;
            pictureBox1.Image = Image.FromFile(images[index]);
        }

        private void Next_Click(object sender, EventArgs e)
        {
            index++;
            if (index > 4)
                index = 0;
            pictureBox1.Image = Image.FromFile(images[index]);
        }

        private void pictureBox1_Click(object sender, EventArgs e)
        {
            
        }


    }
}

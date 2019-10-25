namespace Defference
{
    partial class Form1
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.pictureBox1 = new System.Windows.Forms.PictureBox();
            this.Preview = new System.Windows.Forms.Button();
            this.Next = new System.Windows.Forms.Button();
            this.cnt = new System.Windows.Forms.Label();
            this.label2 = new System.Windows.Forms.Label();
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox1)).BeginInit();
            this.SuspendLayout();
            // 
            // pictureBox1
            // 
            this.pictureBox1.Location = new System.Drawing.Point(29, 12);
            this.pictureBox1.Name = "pictureBox1";
            this.pictureBox1.Size = new System.Drawing.Size(723, 397);
            this.pictureBox1.SizeMode = System.Windows.Forms.PictureBoxSizeMode.Zoom;
            this.pictureBox1.TabIndex = 0;
            this.pictureBox1.TabStop = false;
            this.pictureBox1.Click += new System.EventHandler(this.pictureBox1_Click);
            // 
            // Preview
            // 
            this.Preview.Location = new System.Drawing.Point(371, 432);
            this.Preview.Name = "Preview";
            this.Preview.Size = new System.Drawing.Size(54, 25);
            this.Preview.TabIndex = 1;
            this.Preview.Text = "Preview";
            this.Preview.UseVisualStyleBackColor = true;
            this.Preview.Click += new System.EventHandler(this.Preview_Click);
            // 
            // Next
            // 
            this.Next.Location = new System.Drawing.Point(431, 432);
            this.Next.Name = "Next";
            this.Next.Size = new System.Drawing.Size(62, 25);
            this.Next.TabIndex = 2;
            this.Next.Text = "Next";
            this.Next.UseVisualStyleBackColor = true;
            this.Next.Click += new System.EventHandler(this.Next_Click);
            // 
            // cnt
            // 
            this.cnt.AutoSize = true;
            this.cnt.Location = new System.Drawing.Point(260, 438);
            this.cnt.Name = "cnt";
            this.cnt.Size = new System.Drawing.Size(13, 13);
            this.cnt.TabIndex = 3;
            this.cnt.Text = "0";
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Location = new System.Drawing.Point(206, 438);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(49, 13);
            this.label2.TabIndex = 4;
            this.label2.Text = "REMAIN";
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.AutoSize = true;
            this.ClientSize = new System.Drawing.Size(773, 470);
            this.Controls.Add(this.label2);
            this.Controls.Add(this.cnt);
            this.Controls.Add(this.Next);
            this.Controls.Add(this.Preview);
            this.Controls.Add(this.pictureBox1);
            this.Name = "Form1";
            this.Text = "Form1";
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox1)).EndInit();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.PictureBox pictureBox1;
        private System.Windows.Forms.Button Preview;
        private System.Windows.Forms.Button Next;
        private System.Windows.Forms.Label cnt;
        private System.Windows.Forms.Label label2;
    }
}


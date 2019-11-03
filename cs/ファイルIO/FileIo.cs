using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace MyNameSpace {
	public class MyClass {
		public static void Main(string[] args) {
			// ��t�@�C���쐬
			System.IO.File.Create(@"Sample0.txt").Close();
			// ��t�@�C���쐬(���������Ȃ�)
			using (System.IO.FileStream fs = System.IO.File.Create(@"Sample1.txt")) // using��d����
			using (System.IO.StreamWriter sw = new System.IO.StreamWriter(fs)) {
				sw.WriteLine("aaa");
			}
			// �t�@�C���R�s�[(�㏑��OK)
			System.IO.File.Copy(@"Sample1.txt", @"Sample2.txt", true);
			// �t�@�C���ړ�(���l�[��)
			System.IO.File.Move(@"Sample2.txt", @"Sample3.txt");
			// �t�@�C���폜
			System.IO.File.Delete(@"Sample1.txt");

			System.IO.Directry.CreateDirectory(@"Sample1");

		}
	}
	// �N���X
	public class SubClass {	
		public string wd1 { get; private set; }
		public string wd2 { get; private set; }

		public SubClass(string str1, string str2) {
			wd1 = str1;
			wd2 = str2;
		}
		public string SubMethod(){
			return this.wd1 + " " + this.wd2;
		}
	}
}
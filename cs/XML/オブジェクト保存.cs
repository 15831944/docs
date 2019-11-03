using System;
using System.Collections.Generic;
using System.Linq;
using System.Xml.Serialization; // XmlSerializer
using System.IO; //StreamWriter
using System.Text; // UTF8Encoding

namespace MyNameSpace {
	public class MyClass {
		public static void Main(string[] args) {

			// xml�p�f�[�^�쐬
//			SampleClass sc = new SampleClass();
//			sc.Message = "�e�X�g�B";
//			sc.Number  = 124;
//
//			XmlSample.SaveXml(sc);
//
//			var ret = XmlSample.LoadXml();
//			Console.WriteLine($"Number  = [{ret.Number.ToString()}]");
//			Console.WriteLine($"Message = [{ret.Message}]");
			
			// xml�p�f�[�^�쐬
			SampleClass[] ary = new SampleClass[2];
			for (int i = 0; i < ary.Length; i++) {
				ary[i] = new SampleClass();
				ary[i].Number = i;
				ary[i].Message = i.ToString() + "�ł��B";
			}

			XmlSample.SaveXml(ary);
			var retAry = XmlSample.LoadXml2();
			foreach (var e in retAry) {
				Console.WriteLine($"Number  = [{e.Number.ToString()}]");
				Console.WriteLine($"Message = [{e.Message}]");
			}

		}
	}

	public class XmlSample {
		public XmlSample() {
		}

		public static void SaveXml(SampleClass obj){
			string fileName = @"sample.xml";
			//XmlSerializer�I�u�W�F�N�g���쐬
			//�I�u�W�F�N�g�̌^���w�肷��
			XmlSerializer serializer = new XmlSerializer(typeof(SampleClass));
			//�������ރt�@�C�����J���iUTF-8 BOM�����j
			StreamWriter sw = new StreamWriter(fileName, false, new UTF8Encoding(false));
			//�V���A�������AXML�t�@�C���ɕۑ�����
			serializer.Serialize(sw, obj);
			//�t�@�C�������
			sw.Close();
		}

		public static void SaveXml(SampleClass[] ary){
			string fileName = @"sample.xml";
			XmlSerializer serializer = new XmlSerializer(typeof(SampleClass[]));
			StreamWriter sw = new StreamWriter(fileName, false, new UTF8Encoding(false));
			serializer.Serialize(sw, ary);
			sw.Close();
		}

		public static SampleClass LoadXml(){
			string fileName = @"sample.xml";
			//XmlSerializer�I�u�W�F�N�g���쐬
			XmlSerializer serializer = new XmlSerializer(typeof(SampleClass));
			//�ǂݍ��ރt�@�C�����J��
			StreamReader sr = new StreamReader(
			fileName, new UTF8Encoding(false));
			//XML�t�@�C������ǂݍ��݁A�t�V���A��������
			SampleClass obj = (SampleClass)serializer.Deserialize(sr);
			//�t�@�C�������
			sr.Close();
			return obj;
		}

		public static SampleClass[] LoadXml2(){
			string fileName = @"sample.xml";
			//�ۑ��������e�𕜌�����
			XmlSerializer serializer = new XmlSerializer(typeof(SampleClass[]));
			StreamReader sr = new StreamReader(fileName, new UTF8Encoding(false));
			SampleClass[] loadAry;
			loadAry = (SampleClass[])serializer.Deserialize(sr);
			sr.Close();
			return loadAry;
		}


	}
	//XML�t�@�C���ɕۑ�����I�u�W�F�N�g�̂��߂̃N���X
	public class SampleClass {
	    [System.Xml.Serialization.XmlIgnore]
	    public string hoge = "hogege";
		public int Number;
	    public string Message;
	    [System.Xml.Serialization.XmlIgnore]
	    public string huga = "hugaga";
	}
}


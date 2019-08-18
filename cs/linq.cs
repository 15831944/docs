����1.�v�f�̎擾�i�P��j
	���\�b�h��           |�@�\
	---------------------+----------------------------------------------------------------------------
	ElementAt            |
	ElementAtOrDefault   |�w�肵���ʒu(�C���f�b�N�X)�ɂ���v�f��Ԃ��܂��B
	First                |
	FirstOrDefault       |�ŏ��̗v�f��Ԃ��܂��B
	Last                 |
	LastOrDefault        |�Ō�̗v�f��Ԃ��܂��B
	Single               |
	SingleOrDefault      |�B��̗v�f��Ԃ��܂��B�Y������v�f����������ꍇ�A��O���X���[���܂��B
	�Y���̗v�f���Ȃ��ꍇ�́c 
	�@�u�`OrDefault�v���t���Ă��Ȃ����\�b�h�͗�O���X���[�B
	�@�u�`OrDefault�v���t�������\�b�h�͌^�̋K��l��Ԃ��B

	var source = new[] { 3, 4, 5, 6, 7, 8, 9, 9 };
	Console.WriteLine(source.ElementAt(2));           // �� 5
	Console.WriteLine(source.ElementAtOrDefault(10)); // �� 0
	Console.WriteLine(source.First());                // �� 3
	Console.WriteLine(source.First(e => e > 5));      // �� 6
	Console.WriteLine(source.Last());                 // �� 9
	Console.WriteLine(source.Last(e => e < 5));       // �� 4
	Console.WriteLine(source.Single());               // �� System.InvalidOperationException:
	                                                  //    �V�[�P���X�ɕ����̗v�f���܂܂�Ă��܂�
	Console.WriteLine(source.Single(e => e < 4 ));    // �� 3

����2.�v�f�̎擾�i�����j
	���\�b�h��           |�@�\
	---------------------+-----------------------------------
	Where                |�����𖞂����v�f�����ׂĕԂ��܂��B
	Distinct             |�d�����������V�[�P���X��Ԃ��܂��B
	Skip                 |�擪����w�肳�ꂽ���̗v�f���X�L�b�v���A�c��̃V�[�P���X��Ԃ��܂��B
	SkipWhile            |�擪����w�肳�ꂽ�����𖞂����Ȃ��Ȃ�܂ŗv�f���X�L�b�v���A�c��̃V�[�P���X��Ԃ��܂��B
	Take                 |�擪����w�肳�ꂽ���̗v�f��Ԃ��܂��B
	TakeWhile            |�擪����w�肳�ꂽ�����𖞂����v�f��Ԃ��܂��B

	var source = new[] { 3, 4, 5, 6, 7, 8, 9, 9 };
	Console.WriteLine(source.Where(e => e > 5).ToResult());     // �� {6, 7, 8, 9, 9}
	Console.WriteLine(source.Distinct().ToResult());            // �� {3, 4, 5, 6, 7, 8, 9}
	Console.WriteLine(source.Skip(5).ToResult());               // �� {8, 9, 9}
	Console.WriteLine(source.SkipWhile(e => e < 5).ToResult()); // �� {5, 6, 7, 8, 9, 9}
	Console.WriteLine(source.Take(5).ToResult());               // �� {3, 4, 5, 6, 7}
	Console.WriteLine(source.TakeWhile(e => e < 5).ToResult()); // �� {3, 4}

����3.�W�v
	���\�b�h�� |�@�\
	-----------+------------------------------------------------
	Max        |�ő�l��Ԃ��܂��B
	Min        |�ŏ��l��Ԃ��܂��B
	Average    |���ϒl��Ԃ��܂��B
	Sum        |���v��Ԃ��܂��B
	Count      |�v�f����Ԃ��܂��B
	Aggregate  |�A�L�������[�^�֐��ŏ����������ʂ�Ԃ��B

	var source = new[] { 3, 4, 5, 6, 7, 8, 9, 9 };
	Console.WriteLine(source.Max());                                // �� 9
	Console.WriteLine(source.Min());                                // �� 3
	Console.WriteLine(source.Average());                            // �� 6.375
	Console.WriteLine(source.Sum());                                // �� 51
	Console.WriteLine(source.Count());                              // �� 8
	// https://webbibouroku.com/Blog/Article/linq-aggregate
	Console.WriteLine(source.Aggregate((now, next) => now * next)); // �� 1632960 (3*4*5*6*7*8*9*9)
	Console.WriteLine(source.Aggregate((count, elem) => count + 1); // �� 8
	Console.WriteLine(source.Aggregate((n, elem) => n + elem);      // �� 51 (3+4+5+6+7+8+9+9)
	Console.WriteLine(source.Aggregate(100, (n, elem) => n + elem); // �� 151 100+(3+4+5+6+7+8+9+9)
	var data = new[] {"��","��","��","��","��"};
	var d = data.Aggregate("", (str, elem) => {
	    Console.WriteLine(string.Format($"STR:{str}, ELEM:{elem}"));
	    return str + elem;
	});
	Console.WriteLine(d); // �� �����������H
	
	// �Q�l�F�W�{���U
	double ave = source.Average();
	Console.WriteLine(source.Sum(e => Math.Pow(e - ave, 2)) / source.Count()); // �� 4.484375

����4.����
	���\�b�h��      |�@�\
	----------------+-------
	All             |���ׂĂ̗v�f�������𖞂����Ă邩����B
	Any             |�����𖞂����v�f���܂܂�Ă��邩����B
	Contains        |�w�肵���v�f���܂܂�Ă��邩�ǂ����𔻒�B
	SequenceEqual   |2�̃V�[�P���X�����������ǂ����𔻒�B

	var source = new[] { 3, 4, 5, 6, 7, 8, 9, 9 };
	Console.WriteLine(source.All(e => e > 5));                     // �� False
	Console.WriteLine(source.Any(e => e > 5));                     // �� True
	Console.WriteLine(source.Contains(10));                        // �� False
	Console.WriteLine(source.SequenceEqual(new[] { 6, 7, 8, 9 })); // �� False

����5.�W��
	���\�b�h��      |�@�\
	----------------+-----------------------------------------
	Union           |�w�肵���V�[�P���X�Ƃ̘a�W����Ԃ��B
	Except          |�w�肵���V�[�P���X�Ƃ̍��W����Ԃ��B
	Intersect       |�w�肵���V�[�P���X�Ƃ̐ϏW����Ԃ��B

	var first = new[] { 3, 4, 5, 6, 7, 8, 9, 9 };
	var second = new[] { 8, 9, 10 };
	Console.WriteLine(first.Union(second).ToResult());     // �� {3, 4, 5, 6, 7, 8, 9, 10}
	Console.WriteLine(first.Except(second).ToResult());    // �� {3, 4, 5, 6, 7}
	Console.WriteLine(first.Intersect(second).ToResult()); // �� {8, 9}

����6.�\�[�g
	���\�b�h��            |�@�\
	----------------------+-----------------------------------------------------------------------------------------
	OrderBy               |�����Ƀ\�[�g�����V�[�P���X��Ԃ��܂��B
	OrderByDescending     |�~���Ƀ\�[�g�����V�[�P���X��Ԃ��܂��B
	ThenBy                |�\�[�g�����V�[�P���X�ɑ΂��A�L�[���������v�f���m�������Ƀ\�[�g�����V�[�P���X��Ԃ��܂��B
	ThenByDescending      |�\�[�g�����V�[�P���X�ɑ΂��A�L�[���������v�f���m���~���Ƀ\�[�g�����V�[�P���X��Ԃ��܂��B
	Reverse               |�t���Ƀ\�[�g�����V�[�P���X��Ԃ��܂��B

	var source = new[] {  
	    new{Name = "C#", Age = 11},
	    new{Name = "Java", Age = 16},
	    new{Name = "Groovy", Age = 8},
	    new{Name = "Scala", Age = 8},
	};
	Console.WriteLine(source.OrderBy(e => e.Age).ToResult());
		// �� {{ Name = Groovy, Age = 8 },
		//     { Name = Scala, Age = 8 }, 
		//     { Name = C#, Age = 11 },
		//     { Name = Java, Age = 16 }}
	Console.WriteLine(source.OrderByDescending(e => e.Age).ToResult());
		// �� {{ Name = Java, Age = 16 },
		//     { Name = C#, Age = 11 },
		//     { Name = Groovy, Age = 8 },
		//     { Name = Scala, Age = 8 }}
	Console.WriteLine(source.OrderBy(e => e.Age)
	                        .ThenBy(e => e.Name.Length).ToResult());
		// �� {{ Name = Scala, Age = 8 },
		//     { Name = Groovy, Age = 8 },
		//     { Name = C#, Age = 11 },
		//     { Name = Java, Age = 16 }}
	Console.WriteLine(source.OrderBy(e => e.Age)
	                        .ThenByDescending(e => e.Name.Length).ToResult());
		// �� {{ Name = Groovy, Age = 8 },
		//     { Name = Scala, Age = 8 },
		//     { Name = C#, Age = 11 },
		//     { Name = Java, Age = 16 }}
	Console.WriteLine(source.Reverse().ToResult());
		// �� {{ Name = Scala, Age = 8 },
		//     { Name = Groovy, Age = 8 },
		//     { Name = Java, Age = 16},
		//     { Name = C#, Age = 11 }}

����7.�ˉe
	���\�b�h��            |�@�\
	----------------------+---------------
	Select                |1�̗v�f��P��̗v�f�Ɏˉe���܂��B
	SelectMany            |1�̗v�f���畡���̗v�f�Ɏˉe���܂��B���̌��ʂ�1�̃V�[�P���X�Ƃ��ĕԂ��܂��B
	GroupBy               |�w��̃L�[�ŗv�f���O���[�v�����܂��B���� "�L�[�ƃO���[�v" �̃V�[�P���X��Ԃ��܂��B

	var source = new[] {  
	    new{Name = "C#", Age = 11},
	    new{Name = "Java", Age = 16},
	    new{Name = "Groovy", Age = 8},
	    new{Name = "Scala", Age = 8},
	};
	Console.WriteLine(source.Select(e => e.Name).ToResult()); 
		// �� {C#, Java, Groovy, Scala}
	Console.WriteLine(source.SelectMany(e => e.Name.ToCharArray()).ToResult());
		// �� {C, #, J, a, v, a, G, r, o, o, v, y, S, c, a, l, a}
	Console.WriteLine(source.GroupBy(e => e.Age).ToResult());
		// �� {Key=11, Source={{ Name = C#, Age = 11 }},
		//     Key=16, Source={{ Name = Java, Age = 16 }},
		//     Key=8, Source={{ Name = Groovy, Age = 8 }, { Name = Scala, Age = 8 }}}
����8.����
	���\�b�h��            |�@�\
	----------------------+-------------------------------------------------------------------------------------------
	Join                  |�����������s�����V�[�P���X��Ԃ��B
	GroupJoin             |���O���������s���Ďw��̃L�[�ŃO���[�v������B���� "�L�[�ƃO���[�v" �̃V�[�P���X��Ԃ��B
	Concat                |�Q�̃V�[�P���X��A�����܂��B
	                      |�iUnion�͓����v�f����ɂ܂Ƃ߂܂����AConcat�͌��̗v�f�����ׂĕԂ��܂��B�j
	DefaultIfEmpty        |�V�[�P���X��Ԃ��B�V�[�P���X����Ȃ�A�K��l�������͔C�ӂ̗v�f��Ԃ��B
	Zip                   |�w�肵���֐��ŁA2�̃V�[�P���X��1�̃V�[�P���X�Ƀ}�[�W�B

	var outer = new[] {
	    new{Name = "C#", Age = 11},
	    new{Name = "Java", Age = 16},
	    new{Name = "Groovy", Age = 8},
	    new{Name = "Scala", Age = 8},
	};
	var outer2 = new[] {
	     new{Name = "Python", Age = 21},
	     new{Name = "COBOL", Age = 52},
	};
	var inner = new[] {
	    new{Name = "C#", DesignedBy = "Microsoft"},
	    new{Name = "Java", DesignedBy = "Sun Microsystems"},
	    new{Name = "Java", DesignedBy = "Oracle"},
	};

	Console.WriteLine(outer.Join(inner,
	                             o => o.Name,
	                             i => i.Name, 
	                             (o, i) => new { o.Name, o.Age, i.DesignedBy}).ToResult());
		// �� {{ Name = C#,   Age = 11, DesignedBy = Microsoft },
		//     { Name = Java, Age = 16, DesignedBy = Sun Microsystems },
		//     { Name = Java, Age = 16, DesignedBy = Oracle }}
	Console.WriteLine(outer.GroupJoin(inner,
	                                  o => o.Name,
	                                  i => i.Name,
	                                  (o, i) => new { o.Name, o.Age, DesigndBy = i.Select(e => e.DesignedBy).ToResult() }).ToResult());
		// �� {{ Name = C#,     Age = 11, DesigndBy = {Microsoft} },
		//     { Name = Java,   Age = 16, DesigndBy = {Sun Microsystems, Oracle} },
		//     { Name = Groovy, Age = 8,  DesigndBy = {} },
		//     { Name = Scala,  Age = 8,  DesigndBy = {} }}
	Console.WriteLine(outer.Concat(outer2).ToResult());
		// �� {{ Name = C#,     Age = 11 },
		//     { Name = Java,   Age = 16 },
		//     { Name = Groovy, Age = 8 },
		//     { Name = Scala,  Age = 8 },
		//     { Name = Python, Age = 21 },
		//     { Name = COBOL,  Age = 52 }}
	Console.WriteLine(outer.DefaultIfEmpty().ToResult());
		// �� {{ Name = C#,     Age = 11 },
		//     { Name = Java,   Age = 16 },
		//     { Name = Groovy, Age = 8 },
		//     { Name = Scala,  Age = 8 }}
	Console.WriteLine(outer.Zip(outer2, (o1, o2) => o1.Name + "&" + o2.Name).ToResult());
		// �� {C#&Python, Java&COBOL}

����9.�ϊ�
	���\�b�h��            |�@�\
	----------------------+-------------------------------------------------------------------------------
	OfType                |�e�v�f���w�肵���^�ɕϊ��B�L���X�g�ł��Ȃ��v�f�͏��O�B
	Cast                  |�e�v�f���w�肵���^�ɕϊ��B�L���X�g�ł��Ȃ��v�f���܂܂�Ă����ꍇ�A��O���X���[�B
	ToArray               |�z����쐬���܂��B
	ToDictionary          |�A�z�z��(�f�B�N�V���i��)���쐬���܂��B
	ToList                |���X�g�𐶐����܂��B
	ToLookup              |�L�[�R���N�V����*1�𐶐����܂��B
	AsEnumerable          |IEnumerable ��Ԃ��܂��B*2

	ArrayList mixed = new ArrayList { "C#", "Java", 3.141592653, "Groovy", "Scala" };
	Console.WriteLine(mixed.OfType<string>().ToResult());
		// �� {C#, Java, Groovy, Scala}
	Console.WriteLine(mixed.Cast<string>().ToResult());
		// �� System.InvalidCastException: 
		//    �^ 'System.Double' �̃I�u�W�F�N�g���^ 'System.String' �ɃL���X�g�ł��܂���B

�����⑫ ���ʕ\���p�̊g�����\�b�h
	static String ToResult<TSource>(this IEnumerable<TSource> source) {
	    return "{" + string.Join(", ", source) + "}";
	}

	static String ToResult<TKey, TSource>(this IEnumerable<IGrouping<TKey, TSource>> source) {
	    return source.Select(group => string.Format("Key={0}, Source={1}", group.Key, group.ToResult())).ToResult();
	}

	*1:1�Α��̃f�B�N�V���i���B�Ⴆ�΁A�`.ToLookup()["hoge"] �Ǝ��s����ƁA
	   "hoge" �ɕR�t���v�f�̏W���iIEnumerable�j���Ԃ��Ă��܂��B
	*2:IEnumerable �Ɠ������O�̃��\�b�h���N���X���ɒ�`����Ă���ꍇ�Ɏg���܂��B
	    ���̂܂܂��ƁA�N���X���̃��\�b�h���D��I�ɑI������āAIEnumerable �̊g�����\�b�h���Ăт����Ȃ����߂ł��B


190813
ExcelVBA�ł悭�g���֗��ȃR�[�h�E�X�j�y�b�g�܂Ƃ�

�����O���t�@�C���E�t�H���_����
�� �t�@�C������
	Mkdir "C:\temp" ' �t�H���_�쐬
	RmDir "C:\temp" ' �t�H���_�폜
	Name  "C:\temp" As "C:\temp\works"   '�t�H���_�ړ�
	Name  "C:\temp" As "C:\works"        '�t�H���_���ύX
	FileCopy �R�s�[�O�̃t�@�C���̃t���p�X, �R�s�[��̃t�@�C���̃t���p�X '�t�@�C���R�s�[
	Kill     �Ώۃt�@�C���̃t���p�X '�t�@�C���폜

������t�H���_�̃p�X
	str = ThisWorkbook.Path     '���ݑ��삵�Ă���u�b�N�̃p�X
	str = ThisWorkbook.FullName '���ݑ��삵�Ă���u�b�N�̃t���p�X
	str = CreateObject("WScript.Shell").SpecialFolders("MyDocuments") '�}�C�h�L�������g�̃p�X
	str = CreateObject("WScript.Shell").SpecialFolders("Desktop")     '�f�X�N�g�b�v�̃p�X

���t���p�X���p�X���E�t�@�C�������擾
	'������؂���𗘗p
	file = "C:\folder1\folder2\sample.xls" '�t���p�X�擾
	i = InStrRev(file, "\") '�E���琔���čŏ���\�̈ʒu
	file_name = Right(file, Len(file) - i) '�t�@�C����
	path_name = Left(file, i - 1) '�p�X��

���f�B���N�g���E�t�@�C�������݊m�F
	Dim ExistsDirPath As String
	Dim NotExistsDirPath As String
	ExistsDirPath = "D:\tmp\excel"
	NotExistsDirPath = "D:\xxxx"
	Debug.Print "> " & Dir(ExistsDirPath, vbDirectory)
	Debug.Print "> " & Dir(NotExistsDirPath, vbDirectory)
	Debug.Print "> " & (Dir(NotExistsDirPath, vbDirectory) = "")
	> excel
	> 
	> True

    Dir() �֐��ő��݃`�F�b�N���s����B
    �f�B���N�g�����`�F�b�N����ꍇ�́A�������� vbDirectory ��n���B
    ���݂���ꍇ�́A�ǂ̃f�B���N�g���̖��O���A���݂��Ȃ��ꍇ�͋󕶎����Ԃ����B
    �t�@�C���̏ꍇ�́A vbDirectory ������ Dir() �֐����g���΂����B

���f�B���N�g�������K�w���܂Ƃ߂Đ���
	Private Declare Function SHCreateDirectoryEx Lib "shell32" Alias "SHCreateDirectoryExA" ( _
	                                                                  ByVal hwnd As Long, _
	                                                                  ByVal pszPath As String, _
	                                                                  ByVal psa As Long) As Long

	' Win API ���Ăяo���f�B���N�g�����쐬����B
	' �쐬�ɐ���������A0���Ԃ����B
	' ���Ƀt�H���_�����݂���ꍇ�A�����̊��ł� 183 ���Ԃ��ꂽ�B
	Private Function MkDirs(path As String) As Long
	    MkDirs = SHCreateDirectoryEx(0&, path, 0&)
	End Function

	Public Sub �f�B���N�g�������K�w���܂Ƃ߂Đ���()
	    Debug.Print MkDirs("D:\tmp\hoge\fuga")
	End Sub


�����u�b�N����
������ȃu�b�N
	ThisWorkBook    ' VBA�R�[�h���L�q����Ă���u�b�N
	ActiveWorkBook  ' ���ݕ\������Ă���u�b�N
		'VBA�R�[�h��ۑ����Ă���u�b�N���ǂꂩ��m�肽���ꍇ�̂�ThisWorkBook�𗘗p���A
		'����ȊO�͑S��ActiveWorkBook�𗘗p����Ɗo���Ă����Ă����Ȃ��B

���u�b�N���J��
	Dim wb As Workbook
	Set wb = Workbooks.Open("�i�t���p�X�j�u�b�N��.xlsm") '�߂�l���擾���Ȃ��Ă�����
	Set wb = Workbooks.Open(Filename:="�i�t���p�X�j�u�b�N��.xlsm", ReadOnly:=True) ' �ǂݎ���p

���u�b�N�����
	wb.Close
	wb.Close saveChanges:=True '�ۑ����ĕ���
	wb.Close saveChanges:=False '�ۑ����Ȃ��ŕ���

���ۑ�
	wb.Save '�㏑���ۑ�
	wb.SaveAs "�i�t���p�X�j�V�u�b�N��.xlsm" '�ʖ��ۑ�

���u�b�N����
	For i = 1 To Workbooks.Count
		Debug.Print Workbooks(i).Name
	Next i

	For Each wb In Workbooks
		Debug.Print wb.Name
	Next wb

	Sub �C�ӂ̃u�b�N���J���Ă��邩�ǂ���()
		Dim wb As Workbook, flag As Boolean
		For Each wb In Workbooks
			If wb.Name = "Book1.xlsx" Then
				flag = True
				Exit For
			End If
		Next wb
		If flag = True Then
			MsgBox "Book1.xlsx���J���Ă��܂�"
		Else
			MsgBox "Book1.xlsx�͊J���Ă��܂���"
		End If
	End Sub

���A�N�e�B�u��
	Workbooks("Book1.xlsx").Activate ' �u�b�N�uBook1.xlsx�v���A�N�e�B�u

�����V�[�g����
�����[�N�V�[�g�̒ǉ�
	Dim ws As Worksheet
	Set ws = Worksheets.Add()     '�߂�l���擾���Ȃ��Ă�����
	Activesheet.Name = "�V�[�g��" ' �ǉ��V�[�g��Active�Ȃ̂ŃA�N�e�B�u�V�[�g�ɖ��O��t����B
	str = ActiveSheet.Name '�ǉ������V�[�g��Active��
	''�V�[�g���Ō���ɍ쐬����
	Worksheets.Add After:=Worksheets(Worksheets.Count) 

�����[�N�V�[�g�̕���
	Sheets("Sheets Name").Copy Before:=Sheets(Sheets.Count)  '�Ō���ɃV�[�g�R�s�[
	Sheets("Sheets Name").Copy Before:=Sheets(Sheets.Count)  '�Ō���̈�O�ɃV�[�g�R�s�[
	str = ActiveSheet.Name '���ʂ����V�[�g��Active��

�����[�N�V�[�g�̍폜
'�A�N�e�B�u�V�[�g���폜
	Application.DisplayAlerts = False ' �x������
	ws.Delete
	Application.DisplayAlerts = True
'�w��V�[�g���폜
	Worksheets(1).Delete ''�C���f�b�N�X�ԍ�1�̃V�[�g���폜
	Worksheets("sheetA").Delete ''�V�[�g���usheetA�v���폜

���A�N�e�B�u��
	Worksheets("Sheet2").Activate

���V�[�g����
	For Each objSheet In ThisWorkbook.Worksheets
		Debug.Print objSheet.Name
	Next

	For i = 1 To ThisWorkbook.Worksheets.Count
		Debug.Print ThisWorkbook.Worksheets(i).Name
	Next

���ʃV�[�g�̃Z���ݒ�
	Sheets("Sheet2").Select
	Range("A1") = 1000

���w�肵�����O�̃��[�N�V�[�g���A�N�e�B�u���ǂ�������
	Private Function IsActiveSheet(sheetName As String) As Boolean
		On Error Resume Next
		Err.Clear
		Sheets(sheetName).Activate
		If Err.Number > 0 Then
		    IsActiveSheet = False
		Else
		    IsActiveSheet = True
		End If
		On Error GoTo 0
	End Function



�����s�E�񑀍�
���s�̎w��A��̎w��A�V�[�g�S�̂̎w��
	Cells(1,2).EntireRow    '' 1�s�ڑS��
	Cells(1,2).EntireColumn '' B��S��
	Cells                   '' �S�́BCells�ƋL�q���邾��

���s�E��A�͈͂��폜
	Range("A1:C3").EntireRow.Delete    ''Range�Ŏw�肵���͈͂̍s�S�̂��폜
	Range("A1:C3").EntireColumn.Delete ''Range�Ŏw�肵���͈̗͂�S�̂��폜
	Range("A1:C3").Delete              ''Range�Ŏw�肵���͈͂��폜���܂��B
	Range("A1:C3").Delete Shift:=xlShiftUp ''Range�Ŏw�肵���͈͂��폜���A������ɃV�t�g


�����E�����ݒ�
��̕����擾
	d = Columns(2).ColumnWidth
	d = Columns("B").Width
�Z���uA1�v�̗�
	d = Range("A1").EntireColumn.ColumnWidth
	d = Range("A1").EntireColumn.Width
������̕����擾
	�͈͂̂��ׂĂ̗�̕��������Ƃ��� 1 ��̕����擾���܂��B�Ⴄ�����܂܂�Ă���Ƃ��� Null �ɂȂ�܂��B
	d = Range("B:C").ColumnWidth                  ' B �` C ��̕����擾
	d = Range(Columns(2), Columns(3)).ColumnWidth ' B �` C ��̕����擾
	d = Range("D:D").ColumnWidth                  ' D ��̕����擾
�͈͂̕��̍��v���擾
	d = Range("B:C").Width '  B �` C ��̕��̍��v���擾

��̕���ݒ�
	Columns(2).ColumnWidth = 20
	Columns("B").ColumnWidth = 20
	Worksheets("Sheet2").Columns(1).ColumnWidth = 20 ' Sheet2 �̗�̕���ݒ�
	Worksheets(2).Columns(1).ColumnWidth = 20        ' Sheet2 �̗�̕���ݒ�
�Z���uA1�v�̗�ɕ���ݒ�
	Range("A1").EntireColumn.ColumnWidth = 20
������̕���ݒ�
	�e��̕����w�肵�����ɂȂ�܂��B
	Range("B:C").ColumnWidth = 20
	Range(Columns(2), Columns(3)).ColumnWidth = 20
��̕��������ݒ�
	Columns(2).AutoFit             ' B ��̕�����������
	Range("B:C").Columns.AutoFit   ' B �` C ��̕�����������
	Range("B1:C3").Columns.AutoFit ' B �` C ��̕����Z���uB1 �` C3�v�ɍ��킹�Ď�������

�������̐ݒ�
�s�̍������擾
	d = Rows(2).RowHeight
	d = Rows(2).Height
�Z���uA1�v�̍s������
	d = Range("A1").EntireRow.RowHeight
	d = Range("A1").EntireRow.Height
�����s�̍������擾
	�͈͂̂��ׂĂ̍s�̍����������Ƃ��� 1 �s�̍������擾���܂��B�Ⴄ�������܂܂�Ă���Ƃ��� Null �ɂȂ�܂��B
	d = Range("2:3").RowHeight ' 2 �` 3 �s�ڂ̍������擾
	d = Range("4:4").RowHeight ' 4 �s�ڂ̍������擾
�͈͂̍����̍��v���擾
	d = Range("2:3").Height ' 2 �` 3 �s�ڂ̍����̍��v���擾

�s�̍�����ݒ肷��
	Rows(2).RowHeight = 20
	Worksheets("Sheet2").Rows(1).RowHeight = 20 ' Sheet2 �̍s�̍�����ݒ�
	Worksheets(2).Rows(1).RowHeight = 20 ' Sheet2 �̍s�̍�����ݒ�
�Z���uA1�v�̍s�ɍ�����ݒ�
	Range("A1").EntireRow.RowHeight = 20
�����s�̍�����ݒ肷��
	�e�s�̍������w�肵�������ɂȂ�܂��B
	Range("2:3").RowHeight = 20
�s�̍����������ݒ肷��
	Rows(2).AutoFit             ' 2 �s�ڂ̍�������������
	Range("2:3").Rows.AutoFit   ' 2 �` 3 �s�ڂ̍�������������
�w�肵���V�[�g�̍s����������
	

�����Z������
'// https://docs.microsoft.com/ja-jp/office/vba/api/excel.range(object)
'// https://excel-ubara.com/EXCEL/EXCEL906.html
'// https://excel-ubara.com/EXCEL/EXCEL907.html

��Range�^�������l�`�F�b�N
'�����Aa���󂾂�����
	If a Is Nothing Then�@
'�����Aa���󂶂�Ȃ�������
	If Not a Is Nothing Then

���󗓔���
'�G���[�łȂ��āA�����Ȃ��āA��ł���B
	If Not IsError(Cells(i, 1)) Then
		If Not Cells(i, 1).HasFormula Then
			If Cells(i, 1) = "" Then
				'����
			End If
		End If
	End If

	                  |       |����  |                 |                 |     
	�Z���̓��e        |�l"ABC"|�����|=1/0             |=1/0             |=""  
	                  |       |���Ȃ�|                 |                 |     
	------------------+-------+------+-----------------+-----------------+-----
	�Z���\�����      |ABC    |      |#DIV/0           |#DIV/0           |     
	Range = ""        |FALSE  |TRUE  |�^����v���܂��� |�^����v���܂��� |TRUE 
	Len(Range) = 0    |FALSE  |FALSE |�^����v���܂��� |�^����v���܂��� |FALSE
	Range.HasFormula  |FALSE  |FALSE |TRUE             |FALSE            |TRUE 
	IsError(Range)    |FALSE  |FALSE |TRUE             |TRUE             |FALSE
	IsEmpty(Range)    |FALSE  |TRUE  |FALSE            |FALSE            |FALSE
	Range = Empty     |FALSE  |TRUE  |�^����v���܂��� |�^����v���܂��� |TRUE 
	Range.Formula = ""|FALSE  |TRUE  |FALSE            |FALSE            |FALSE


���Z���w��
	Dim rng As range
	Set rng = sht.Range("A1")
	Set rng = sht.Range("A:A")
	Set rng = sht.Range("�Z���ɂ������O")
	Set rng = sht.Cells(1, 2)
	Range("A1:C3")
	Range("A1:C3, F5:G10")
	Range("E1", "E3").Value = "E"
	Range("F1,F3,F5").Value = "F"
	Range(Cells(a, b), Cells(c, d))

���N���A(Clear�AClearContents)
	Range("A1").Clear '�l�E�����ݒ�E�r���A�R�����g�S�ăN���A�B���g�p��ԂƂȂ�B
	Range("A1").ClearContents '�Z���̐����ƕ��������������B�����i�t�H���g�A�w�i�F�A�r�����j�͎c��B

���폜
	Cells(1, 1).Delete                'A1�Z�����폜
	Cells(1, 1).Delete(xlShiftToLeft) 'A1�Z�����폜���������ɃV�t�g
	Cells(1, 1).Delete(xlShiftUp)     'A1�Z�����폜��������ɃV�t�g

���Z���̏���
With Range("A1") ' Cells()�ł��\
	.Font.Size = 11                     '�T�C�Y��11�ɂ���
	.Font.ColorIndex = xlAutomatic      '�����F��������
	.Font.ColorIndex = 2                '�����F�ύX�i�C���f�b�N�X�\�L�j
	.Font.Color = RGB(0, 0, 0)          '�����F�ύX�iRGB�\�L�j
	.Interior.ColorIndex = xlNone       '�w�i�F���Ȃ���
	.Interior.ColorIndex = 2            '�w�i�F�ύX�i�C���f�b�N�X�\�L�j
	.Interior.ColorIndex = RGB(0, 0, 0) '�w�i�F�ύX�iRGB�\�L�j
End With

���ŏI�[���擾
'�A�������f�[�^�������Ă���͈͂̍ŏI�[���擾
	n = Range("A1").End(xlDown).Row       '�c����
	n = Range("A1").End(xlToRight).Column '������
'�Ō�̃Z������ŏI�[���擾
	n = Cells(Rows.Count, 1).End(xlUp).row           '�c����
	n = Cells(1, Columns.Count).End(xlToLeft).Column '������
'�V�[�g�Ŏg���Ă���Z���̍ŏI�[���擾
	n = ActiveSheet.UsedRange.Columns.count '�ŏI�s
	n = ActiveSheet.UsedRange.Rows.count   '�ŏI��
'�l�������Ă���ŏI�s�E�ŏI��̎擾
With ActiveSheet.UsedRange
	MaxRow = .Find("*", , xlFormulas, , xlByRows, xlPrevious).Row
	MaxCol = .Find("*", , xlFormulas, , xlByColumns, xlPrevious).Column
End With

���ϐ����܂񂾔͈͎w��
	Range(Cells(a, b), Cells(c, d)).Select

���I��͈�
	Selection.PasteSpecial xlPasteValues '�I��͈͂�l�����\��t��
	Range("A1").Select    ' A1��I������
	Range("A1:B2").Select ' A1�`B2��I������
	Rows(1).Select        ' 1�s�ڂ�I������
	Rows("1:5").Select    ' 1�`5�s�ڂ�I������
	Columns("A").Select   ' A���I������
	Columns(1).Select     ' ���������
	Columns("A:E").Select ' A�`E���I������
	Rows(1).Value = 100   ' 1�s�ڂ̑S�Z���̒l��100��ݒ肷��

���I������Ă�͈͂̈ꕔ���擾
	n = Selection.Cells(1).Row                  '�ŏ��̃Z���̍s
	n = Selection.Cells(Selection.Count).Row    '�Ō�̃Z���̍s
	n = Selection.Cells(1).Column               '�ŏ��̃Z���̗�
	n = Selection.Cells(Selection.Count).Column '�Ō�̃Z���̗�

���r���̑���
'��{�`
	Range("A1:E5").Borders.LineStyle = xlContinuous '�������Ђ�
 
'���̎��
With Range("A1:E5").Borders
	.LineStyle = xlContinuous '����(����l)
	.LineStyle = xlDash       '�j��
	.LineStyle = xlDot        '�_��
	.LineStyle = xlDouble     '��d��
	.LineStyle = xlNone       '�폜
End With
 
'���̑���
With Range("A1:E5").Borders
	.Weight = xlThin   '��(����l)
	.Weight = xlMedium '��
	.Weight = xlThick  '��
End With
 
'���̐F
With Range("A1:E5").Borders
	.ColorIndex = xlAutomatic '����(����l)
	.ColorIndex = 3 '��
	.ColorIndex = 5 '��
End With
 
'���ׂ̍����ʒu
With Range("A1:E5")
	.Borders.LineStyle                     = xlContinuous '�g�Ɗi�q�S���ɓK�p
	.Borders(xlEdgeTop).LineStyle          = xlContinuous '���
	.Borders(xlEdgeRight).LineStyle        = xlContinuous '�E��
	.Borders(xlEdgeBottom).LineStyle       = xlContinuous '����
	.Borders(xlEdgeLeft).LineStyle         = xlContinuous '����
	.Borders(xlInsideHorizontal).LineStyle = xlContinuous '������
	.Borders(xlInsideVertical).LineStyle   = xlContinuous '���c��
	.Borders(xlDiagonalUp).LineStyle       = xlContinuous '�E�オ��ΐ�
	.Borders(xlDiagonalDown).LineStyle     = xlContinuous '�E������ΐ�
End With



�����ёւ�(Sort)
'A1:E100�͈͂�C1����ɏ����ɕ��ёւ�
	Range("A1:E100").Sort Key1:=Range("C1"), order1:=xlAscending '�~����xlDescending
 
'3�܂ŗD��L�[��ݒ�ł���
Range("A1:E100").Sort _
	Key1:=Range("C1"), order1:=xlAscending, _
	Key2:=Range("B1"), order2:=xlDescending, _
	Key3:=Range("D1"), order3:=xlAscending

���R�s�y
	Range("A1").Copy         '�R�s�[
	Range("A1").PasteSpecial '�y�[�X�g
	Range("A1").PasteSpecial Paste:=xlPasteValues  '�l�����y�[�X�g
	Range("A1").PasteSpecial Paste:=xlPasteFormats '���������y�[�X�g
	Range("A1").AutoFill Destination:=Range("A1:A5") '�I�[�g�t�B��
	Application.CutCopyMode = False '�R�s�[���[�h����

'�Z���̒l�R�s�[
	Cells(1,1).Copy Destination:=Cells(1,2)
'�����Z���̒l�R�s�[
	Range("C1:C30").Value = Range("D1:D30").Value ' ����

��Range���܂킷
	For Each c In Range("A1:A10000")
		c.Value = 100
	Next c

���g�p���Ă���Z���͈�
	Dim rng As Range
	Set rng = ActiveSheet.UsedRange
	rng.Select	

���͈͂���I�t�Z�b�g�����͈͂��擾����(Offset)
'�A�N�e�B�u�Z���𓮂���
	ActiveCell.Offset(�������s��, ��������).Activate
	ActiveCell.Offset(1, 2).Activate
'�I��͈͂��ړ�����
	Selection.Offset(�������s��, ��������).Select
	Selection.Offset(2, 3).Select
'Range�Ŏw�肵���͈͂�Offset�ŕύX������@
	Range("A1:B2").Offset(2, 3).Select
	Range.Resize�Ŏw�肵���͈͂�Offset������@
'����P�̃Z������͈͂ɕύX���āA������I�t�Z�b�g����ꍇ�Ɏg���B
	Range("A1").Resize(6, 2).Offset(1, 5).Select
'Value��Offset�ő��Έʒu�ɒl����͂�����@
	Range�I�u�W�F�N�g.Offset(�s��, ��).Value = ���͂���l
	Set rng = Range("A1:B8")
	rng.Offset(0, 3).Value = rng.Value

'�Z��(�͈�)�̈ړ�
	Range�I�u�W�F�N�g.Offset(�s����, ������j
	ActiveCell.Offset(1, 0).Select
	Selection.Offset(0, 2).Select 
	Range("A1:D5").Offset(0, 2).Select
'�A�N�e�B�u�Z������E������5��ړ������Z���܂ł̃Z���͈͂���������(Merge)
	Range(ActiveCell, ActiveCell.Offset(0, 5)).Merge
'�I��͈͂�1�s���܂Ŋg�����܂��B
	Range(Selection, Selection.Offset(1, 0)).Select

���͈͂�ύX����(Resize)
���T�C�Y�i�Z���͈͂̃T�C�Y�ύX�j���s���A�T�C�Y�ύX������̃Z���͈͂�Ԃ��B
Range�I�u�W�F�N�g.Resize�i�ύX��̍s��, �ύX��̗񐔁j
�I��͈͂��s�E��Ƃ���1���g������
	Selection.Resize(Selection.Rows.Count + 1, Selection.Columns.Count + 1).Select
	Selection.Resize(Selection.Rows.Count + 1).Select       '�s�������g��
	Selection.Resize(, Selection.Columns.Count + 1).Select  '�񂾂����g��
�킩��₷���R�[�h�ɂ���
	Dim cntRow As Long
	Dim cntCol As Long
	cntRow = Selection.Rows.Count + 1
	cntCol = Selection.Columns.Count + 1
	Selection.Resize(cntRow, cntCol).Select
���͔͈́iA��|E��j�����T�C�Y����E����������f�[�^���R�s�[
	Sub Sample1()
		Dim cntRow As Long
		Dim cntCol As Long
		Dim Rng As Range
		Set Rng = ActiveSheet.Range("A1").CurrentRegion
		cntRow = Rng.Rows.Count
		cntCol = Rng.Columns.Count - 1
		Rng.Resize(cntRow, cntCol).Copy Destination:=Sheets("Sheet2").Range("A1")
	End Sub

'�悭�p������e�N�j�b�N
1�s�ڂ����ڍs�ł���ꍇ�ɁACsv�f�[�^�̃f�[�^�͈͂̂ݎ擾����(=�w�b�_�[�����)
�f�[�^�͈͂�CurrentRegion�Ŏ擾���A���̂��Ƃ�Offset�őΏۃZ���͈͂�1�s���ɂ��炵�AResize��1�s���
	Sub Sample3()
		Dim cntRow As Long
		Dim cntCol As Long
		Dim Rng As Range
		Set Rng = ActiveSheet.Range("A1").CurrentRegion
		cntRow = Rng.Rows.Count - 1
		cntCol = Rng.Columns.Count
		Set Rng = Rng.Offset(1, 0)              '��1�s���ɂ��炷
		Set Rng = Rng.Resize(cntRow, cntCol)    '��1�s���
		Rng.Copy Destination:=Sheets("Sheet2").Range("A2")
	End Sub

��ActiveCell�Ƃ́H

��Selected�H

��Activate�H

��Range�A�h���X��
	rng.Address(False, False) ' �Z���A�h���X��
	rng.Parent.Name           ' �V�[�g��

��CurrentRegion�ł�������͈͂������Ă���
	Dim rng As Range
	Set rng = ActiveSheet.Range("A1").CurrentRegion
	Debug.Print rng.Address(False, False)

�����V�F�C�v
'// https://excel-ubara.com/EXCEL/EXCEL917.html
���S��
Dim e As Variant
For Each e In ActiveSheet.Shapes
	Debug.Print e.Name & e.Top & e.Left & e.Height & e.Width
Next

���e�L�X�g����
ActiveSheet.Shapes(1).TextFrame.Characters.Text = "�T���v��������"

���F�֌W
'�V�F�C�v��V�K�쐬�Ɠ����Ƀp�����[�^��ݒ肷��B
With ActiveSheet.Shapes.AddShape(msoShapeRectangle, 120, 50, 100, 70) ' ��`����}
	.TextFrame.Characters.Text       = "�����I"           '�\�������̎w��
	.TextFrame.Characters.Font.Color = RGB(255, 255, 255) '�}�`���e�L�X�g�̃t�H���g�J���[���w��
	.TextFrame.HorizontalAlignment   = xlHAlignCenter     '�}�`���̃e�L�X�g���������𒆉��ʒu��
	.TextFrame.VerticalAlignment     = xlVAlignCenter     '�}�`���̃e�L�X�g�c�����𒆉��ʒu��
	.Line.ForeColor.RGB              = RGB(255, 0, 0)     '�}�`�̘g���̐F���w��
	.Fill.ForeColor.RGB              = RGB(255, 0, 0)     '�}�`�̓h��Ԃ��F���w��
End With

���V�F�C�v�̎�ނ�����������
	shape.AutoShapeType = msoShape32pointStar 

���폜
'�S�폜�BShapes ���x���B
'�摜�݂̂Ȃ炸�}�`�́A�Ƃɂ����Ȃ�ł����������B
Private Sub IMAGE_DELETE_allShapes()
	Dim MyOb As Object
	Dim i1, i2, i3 As Long
	i1 = ActiveSheet.Shapes.Count
	i2 = ActiveSheet.DrawingObjects.Count
	i3 = ActiveSheet.Pictures.Count
	For Each MyOb In ActiveSheet.Shapes
		MyOb.Delete
	Next
	MsgBox ( _
		"�V�[�g���̃I�[�g�V�F�C�v �̐�:" & i1 & "��" & ActiveSheet.Shapes.Count & vbCrLf & _('Drop Down
		"�V�[�g����DrawingObject�̐�:"   & i2 & "��" & ActiveSheet.DrawingObjects.Count & vbCrLf & _'���e�L�X�g�{�b�N�X��t�L�_�V
		"�V�[�g����Picture �̐�:"        & i3 & "��" & ActiveSheet.Pictures.Count _'���摜
	)
End Sub

���������񑀍�
���A��
str = "�T���v���e�L�X�g" & smp_txt & "sampletext" '�ϐ����������Ă����v

�����l�𕶎���ɕϊ�
str = CStr(n) '�ϐ�n�͐��l�ł��邱��

�������������擾
n = Len(�Ώە�����)

�������̔����o��
str = Left(�Ώە�����, n)   '�Ώە�����̍�����n���������o��
str = Right(�Ώە�����, n)  '�Ώە�����̉E����n���������o��
str = Mid(�Ώە�����, n, i) '�Ώە�����̍�����n�����ڂ���i���������o��

���u��
str = Replace(�Ώە�����, �u���O����, �u���㕶��)
'��
str = Replace(str, " ", "")
str = Replace(str, "�@", "")

���ϊ�
str = StrConv(�Ώە�����, vbNarrow) '���p��
str = StrConv(�Ώە�����, vbWide) '�S�p��
str = StrConv(�Ώە�����, vbLowerCase) '��������
str = StrConv(�Ώە�����, vbUpperCase) '�啶����
str = StrConv(�Ώە�����, vbKatakana) '�J�^�J�i��
str = StrConv(�Ώە�����, vbHiragana) '�Ђ炪�Ȃ�

����v����(������Ɋ܂܂��̂�)
if InStr(String1, String2) <> 0 Then
  MsgBox "match between two Strings"
Else
  MsgBox "mismatch between two Strings"
End If
'������΂��̍ŏ��̕�������Ԃ��A������Ȃ����0��Ԃ�

������
Dim cnt As Integer
For cnt = 1 To 100 Step 1
  Range("A" & cnt) = cnt
  Range("B" + cnt) = cnt
Next

�����䕶��
�E��\�I�Ȑ��䕶���@�ꗗ
�l                  �萔        ���e
Chr(0)              vbNullChar  �l0��������
Chr(9)              vbTab       �^�u����
Chr(8)              vbBack      �o�b�N�X�y�[�X����
Chr(10)             vbLf        ���C���t�B�[�h����
Chr(13)             vbCr        �L�����b�W���^�[������
Chr(13) + Chr(10)   vbCrLf      �L�����b�W���^�[���ƃ��C���t�B�[�h�̑g����

���L���X�g
''StoI
	Dim s1 As String: s1 = CStr(100)
	Debug.Print s1 + s1
''ItoS
	Dim d1 As Double: d1 = CStr("100.2")
	Debug.Print d1 + d1

	CDbl 	�{���x���������_�����^(Double)�ւ̃f�[�^�ϊ�
	CInt 	�����^(Integer)�ւ̃f�[�^�ϊ�
	CLng 	�������^(Long)�ւ̃f�[�^�ϊ�
	CSng 	�P���x���������_�����^(Single)�ւ̃f�[�^�ϊ�
'����or�����`�F�b�N
Sub Sample()
	Dim a As Variant
	a = "aa"
	If IsNumeric(a) Then
		MsgBox a & "Num"
	Else
		MsgBox a & "Str"
	End If
End Sub

�����K�\��
'RegExp�I�u�W�F�N�g
'�E�v���p�e�B
	Pattern     ���K�\���Ŏg�p����p�^�[����ݒ�(.*��[A-Z]�A(�c��|���)�Ȃǂ̕�����)
	IgnoreCase  �啶������������ʂ��Ȃ��Ƃ���True��ݒ肵�܂��B�f�t�H���g��False
	Global      �����Ώۂ̕�������ŁA������S�̂���������ɂ�True��ݒ肵�܂��B�f�t�H���g�ł�False
'�E���\�b�h
	Test     ���K�\���ɂ��}�b�`���O���s���܂��B�p�^�[���ƈ�v�����ꍇ��True��Ԃ��܂��B
	Replace  ����������̒��Ő��K�\���ɂ��}�b�`���O���s���A��������Ƃ��̃}�b�`����������u��������ƒu�������܂��B
	Execute  �}�b�`���O�̌��ʂ�Matches�R���N�V�����Ƃ��ĕԂ��܂��BMatches�R���N�V������Match�I�u�W�F�N�g�̏W���B

'Matches�R���N�V����
	Execute���\�b�h�ɂ���ĕԂ����R���N�V�����B
	Matches�R���N�V�����ɂ�0�ȏ��Match�I�u�W�F�N�g���܂܂��B
	(Execute���\�b�h�̌��ʕԂ��Ă���Matches�R���N�V������Match�I�u�W�F�N�g�����݂��Ȃ�������A�}�b�`���O�͎��s�����Ƃ�������)

'Matches�R���N�V�����̃v���p�e�B�ƃ��\�b�h
'�E�v���p�e�B
	Count  Matches�R���N�V��������Match�I�u�W�F�N�g�̌���Ԃ��܂��B
	       ����𒲂ׂ�ƃ}�b�`���O�̐���/���s���킩��܂��B
	Item   �������ʓI�ȃR���N�V������Item�v���p�e�B�ł��B
	       ���ʂ�Matches(1)�̂悤�ɃA�N�Z�X����̂Ŏg�����Ƃ͂Ȃ��ł��傤�B

'Match�I�u�W�F�N�g�̃v���p�e�B�ƃ��\�b�h
'�E�v���p�e�B
	FirstIndex  �ŏ��Ƀ}�b�`���O�ɐ��������ʒu��Ԃ��܂��B������̐擪��0����n�܂�܂��B
	Length      �}�b�`����������̒�����Ԃ��܂��B
	Value       �}�b�`�����������Ԃ��܂��B

'��ȃ��^�����ƃG�X�P�[�v�V�[�P���X
	^    ������̐擪
	$    ������̖���
	\n   ���s
	.    ���s�������C�ӂ�1����
	*    ���O�̃p�^�[����0��ȏ�̌J��Ԃ�
	+    ���O�̃p�^�[����1��ȏ�̌J��Ԃ�
	?    ���O�̃p�^�[����0��܂���1�񌻂��
	\d   �C�ӂ̐��l
	\D   �C�ӂ̐��l�ȊO�̕���
	\s   �C�ӂ̃X�y�[�X����
	\S   �C�ӂ̃X�y�[�X�ȊO�̕���
	()   �p�^�[���̃O���[�v��
	|    �p�^�[���̘_���a
	[]   �L�����N�^�N���X

Sub Sample1()
	Dim RE, strPattern As String, r As Range
	Set RE = CreateObject("VBScript.RegExp")
	strPattern = "SUM\("
	With RE
		.Pattern = strPattern       ''�����p�^�[����ݒ�
		.IgnoreCase = True          ''�啶���Ə���������ʂ��Ȃ�
		.Global = True              ''������S�̂�����
		For Each r In ActiveSheet.UsedRange
			If .Test(r.Formula) Then r.Interior.ColorIndex = 3
		Next r
	End With
	Set RE = Nothing
End Sub

'�I�����ɐ��K�\���I�u�W�F�N�g���g��Ȃ��Ă��ALike���Z�q�ōςނȂ�A���̕��������₷���B
'�IStrComp�֐����g���₷��

��Like���Z�q
	?            �C�ӂ�1����                                  ����?   ���Ȃ��A���ȂׁA���Ȃ�(�Ȃ�)
	*            0�ȏ�̔C�ӂ̕���                          ����*   �������A�����Ȃ��A������Ȃ�(�Ȃ�)
	#            1�����̐��l(0�`9)                            ##      01�A26�A95(�Ȃ�)
	[charlist]   charlist�Ɏw�肵�������̒���1����            [A-F]   A�AB�AC�AD�AE�AF
	[!charlist]  charlist�Ɏw�肵�������̒��Ɋ܂܂�Ȃ�1����  [!A-F]  G �AH�AI(�Ȃ�)

Sub Sample1()
	Dim i As Long
	For i = 1 To 8
		If Cells(i, 1).Value Like "[!����,���l,��t]*" Then Cells(i, 1).Font.ColorIndex = 3
		If Cells(i, 2).Value Like "[�^-�g]*"           Then Cells(i, 2).Font.ColorIndex = 2
	Next i
End Sub

�������@
���z��
'��`
Dim arr1(4)       As String '0, 1, 2, 3
Dim arr2(5, 3)    As String
Dim arr3(5 To 7)  As String '5, 6, 7
Dim arr4()        As Variant ' �ό^��Variant�ɂ��Ȃ��Ƃ���
arr4 = Array("One", "Two", "Three", "Four")
arr(1) = "Once"

'�������J��
Erase(arr1)

'�Ē�`
Redim arr1(5) As String

'�z��̗v�f��
Dim arr1(2 To 5) As Long
i = UBound(arr1) '2
j = LBound(arr1) '5
k = Ubound(arr1) - LBound(arr2) + 1 ' (5 - 2 + 1 = 4)�v�f��

Dim arr2(1 To 3, 3 To 5, 5 To 11) As Long
Debug.Print LBound(arr2, 1) '1
Debug.Print LBound(arr2, 2) '3
Debug.Print LBound(arr2, 3) '5

'�z���For���[�v(UBound)
For n = LBound(arr1) To UBound(arr1)
	Debug.Print arr1(n)
Next n
'�z���ForEach���[�v
For Each e In arr1
	Debug.Print e
Next e

'�z��R�s�[
Dim arr5 As Variant '�z��R�s�[����Variant�^
arr5 = arr4

'Range�𗘗p�����\�[�g(Sort)
	arr = Array(1, 3, 5, 4, 2)
	'�z��̗v�f���V�[�g�̃Z���ɃZ�b�g
	Dim i As Long
	For i = LBound(arr) To UBound(arr)
	    Cells(i + 1, 1).Value = arr(i)
	Next i

	'Range�I�u�W�F�N�g��Sort���\�b�h���g�p
	Dim myrange As Range
	Set myrange = Range( Cells(LBound(arr) + 1, 1), Cells(UBound(arr) + 1, 1))
	myrange.Sort key1:=Cells(LBound(arr) + 1, 1), Order1:=xlDescending

	'Sort��̌��ʂ��V�[�g�̃Z������擾�\��
	For i = LBound(arr) To UBound(arr)
	    arr(i) = Cells(i + 1, 1).Value
	Next i

	Dim e As Variant '���ʏo��
	For Each e In arr
		Debug.Print(e)
	Next arr

'����(Filter)
	Dim arr1() As Variant, arr2 As Variant
	arr1 = Array("�����s", "���{", "���m��", "�_�ސ쌧", "�L����")
	arr2 = Filter(arr1, "��", True)
	Dim e As Variant
	For Each e In arr2
	    Debug.Print e
	Next e

'����(Join)
	Dim arr1() As Variant
	arr1 = Array("�����s", "���{", "���m��", "�_�ސ쌧", "�L����")
	Dim msg As String
	msg = Join(arr1, ",")
	Debug.Print msg

'����(Split)
	Dim arr() As String
	arr = Split("���� ��� ���É�", " ")
	Dim e As Variant
	For Each e In arr
		Debug.Print e
	Next e

'�z��̊֐����p
	Function MethodSample(arr As String) As String()
		Dim ret() As String
		'...
		MethodSample = ret
	End Function


���l�n��ByVal�A�Q�Ɠn��ByRef
Sub Test
	Dim a As Integer
	a = 1
	Debug.Print "���l a=" & a
	byVal = MyByVal(a)
	Debug.Print "�l�n����� a=" & a
	byRef = MyFunction(a)
	Debug.Print "�Q�Ɠn����� a=" & a
End Sub

Function MyByVal(ByVal arg As Integer) As Integer
	arg = arg + 1  ''��ByVal�ł́ASub�v���V�[�W������a�͏����������Ȃ�
	MyByVal = a
End Function

Function MyByRef(ByRef arg As Integer) As Integer
	arg = arg + 1  ''��ByRef�ł́ASub�v���V�[�W������a��������������
	MyByRef = a
End Function

�����l�̎l�̌ܓ��E�؂�グ�E�؂�̂�
	WorksheetFunction.Round(���l, �����_�ȉ�����)     '' �l�̌ܓ�
	WorksheetFunction.RoundUp(���l, �����_�ȉ�����)   '' �؂�グ
	WorksheetFunction.RoundDown(���l, �����_�ȉ�����) '' �؂�̂�
	Int(-5.5)    ''VBA �؂�̂Ċ֐��B���̒l�̌��ʂ��Ⴄ�B���̌��ʂ�-6
	Fix(-5.5)    ''VBA �؂�̂Ċ֐��B���̒l�̌��ʂ��Ⴄ�B���̌��ʂ�-5

��Select...Case��
��1
	Select Case value
	  Case 1
	      myColor = 3 ''��
	  Case 2
	      myColor = 6 ''��
	  Case 3,4
	      myColor = 8 ''���F
	  Case Else
	      myColor = 10 ''��
	End Select

��2
	Select Case value
	  Case Is < 10
	      myColor = 3 ''��
	  Case Is < 20
	      myColor = 6 ''��
	  Case Is < 30
	      myColor = 8 ''���F
	  Case Else
	      myColor = 10 ''��
	End Select

��3
	Select Case value
	  Case 1 To 9
	      myColor = 3 ''��
	  Case 10 To 19
	      myColor = 6 ''��
	  Case 20 To 29
	      myColor = 8 ''���F
	  Case Else
	      myColor = 10 ''��
	End Select

���J��Ԃ�(While�ADo)
'��������P����P�O�܂ł̘a
Sub sum1()
	Dim Sum As Integer
	Dim i As Long

	Sum = 0: i = 1 'While ~ Wend
	While i <= 10
			Sum = Sum + i: i = i + 1
	Wend

	Sum = 0: i = 1 'Do Until ~ Loop
	Do Until i > 10
			Sum = Sum + i: i = i + 1
	Loop

	Sum = 0: i = 1
	Do             'Do Loop ~ Until
		Sum = Sum + i: i = i + 1
	Loop Until i > 10

	Sum = 0: i = 1
	Do While i <= 10 'Do While ~ Loop
		Sum = Sum + i: i = i + 1
	Loop

	Sum = 0: i = 1
	Do               'Do ~ Loop While
		Sum = Sum + i: i = i + 1
	Loop While i <= 10
End Sub

��Dictionary��Collection
�E���ʓ_
	�n�b�V��(�A�z�z��)�Ƃ��Ďg���B
1. Dictionary
	���F�������x�ƕ֗��ȃ��\�b�h������_�ɂ�����Dictionary�̕�����
	�~�FSet obj = CreateObject("Scripting.Dictionary") ����̂ŁA
	    �Q�Ɛݒ肵�Ȃ��Ɠ��͗\�����łȂ��B
	�~�F�d���������Ȃ�
2. Collection
	���F�l�̌^�Ƀo���c�L�������Ă����Ȃ���String,�z��,Int���������ĂĂ�OK
	�~�F���������ƒx���Ȃ�
	���F���ԕۏ�����Ă���
	���F�d��������

��Continue(�������Goto�̎g����)
For Each e in items
	If e = 10 Then
		GoTo CONTINUE:
	End If
	Debug.Print e
CONTINUE:

������
'1�`6�̗������_�C�A���O�ɕ\������
Sub RANDAM()
	Dim i As Integer
	Dim StrArray(4) As String
	Randomize
	For i = 0 To 4
		StrArray(i) = Int(6 * Rnd + 1)
	Next i
	MsgBox Join(StrArray, vbCrLf)
End Sub


�������t�^
'����
Dim d1 As Date, d2 As Date, d3 As Date
d1 = #11/1/2017#            ' #��/��/�N#           '2017/11/01
d2 = #9:10:30 AM#           ' #��/��/�b#           '9:01:30
d3 = #11/1/2017 9:10:30 AM# ' #��/��/�N ��/��/�b#  '2017/11/01 9:10:30

'������^������t�^�ւ̎����ϊ�
Dim d1 As Date, d2 As Date, d3 As Date
d1 = "11/1/2017"         '2017/11/01
d2 = "9:10:30"           '9:01:30
d3 = "11/1/2017 9:10:30" '2017/11/01 9:10:30

'���ݎ���
Range("A1") = Date '2018/1/1
Range("A1") = Now  '2018/1/1 0:00:00
Range("A1") = Time '0:00:00

'�N�A���A���A���A���A�b�A�j�����擾
Dim d As Date : d = "11/1/2017 9:10:30"
Year(d) & "_" & Month(d) & "_" & Day(d) & "_" & Hour(d) & "_" & Minute(d) & "_" & Second(d) & "_" & Weekday(d)
'2017_11_1_9_10_30_4

'���t���r
Dim d1 As Date, d2 As Date, d3 As Date
d1 = Now
d2 = "11/1/2017"
d3 = "11/1/2017 23:59:59"
If d1 >= d2 And d1 <= d3 Then
	MsgBox d1 & vbCrLf & "�����͈͓��ł�"
Else
	MsgBox d1 & vbCrLf & "�����͈͊O�ł�"
End If

'���t�̌v�Z
	d = DateAdd(�ݒ�l, �v�Z��, �Ώ�) 
	'�ݒ�l�F�N��"yyyy", ����"m", ����"d", �T��"ww", ����"h", ����"n", �b��"s"
	d = DateAdd("d", 1, Date) '1���v���X
	t = DateAdd("h", -1, Time) '1���ԃ}�C�i�X

'���t�̊Ԋu���擾
	DateDiff (interval, date1, date2 [, firstdayofweek] [, firstweekofyear]
	interval : �v�Z���鎞�ԊԊu�������Ŏw��B
	           (interval���w�肷�鏑����DiffAdd�֐��Ɠ���)
	date1�Adate2 : �v�Z�̑ΏۂƂȂ�2�̓��t�̒l�B
	firstdayofweek : �T�̎n�܂�̗j����萔�Ŏw�肵�܂��B(�K��l�͓��j��)
	firstweekofyear : �N�̑�1�T��萔�Ŏw�肵�܂��B(�K��l��1��1�����܂ޏT���1�T�Ƃ��Ďw��)

	firstdayofweek�̐ݒ�
		�萔        �l  ����
		vbSunday     1  ���j��(�f�t�H���g�l)
		vbMonday     2  ���j��
		vbTuesday    3  �Ηj��
		vbWednesday  4  ���j��
		vbThursday   5  �ؗj��
		vbFriday     6  ���j��
		vbSaturday   7  �y�j��

	firstweekofyear�̐ݒ�
		�萔            �l	����
		vbFirstJan1      1  1��1�����܂܂��T����J�n(�f�t�H���g�l)
		vbFirstFourDays  2  4���ȏオ�܂܂��ŏ��̏T���N�̑� 1 �T��
		vbFirstFullWeek  3  1�T�ԑS�̂��܂܂��ŏ��̏T�����̔N�̑� 1 �T��


	Dim d1 As Date, d2 As Date
	d1 = "11/1/2017"
	d2 = "4/1/2018"
	Debug.Print DateDiff("yyyy", d1, d2) & "�N" '1�N
	Debug.Print DateDiff("m", d1, d2) & "����"  '5����
	Debug.Print DateDiff("d", d2, d1) & "��"    '-155��

'���Ԃ̏��߂���̌o�ߎ��Ԃ��擾
	'�N�̏��߂⌎�̏��߂���̌o�ߓ�������̏��߂���̌o�ߎ��ԂȂǁA���Ԃ̏��߂���̌o�ߎ��Ԃ��擾����
	DatePart ( interval, date [, firstdayofweek] [, firstweekofyear] )

	Dim d As Date
	d = "11/1/2017"
	Debug.Print "���N�����T��" & DatePart("ww", d) & "�T�ڂł�"
	Debug.Print "���N��������" & DatePart("y",  d) & "���ڂł�"

'���t�̑Ó������`�F�b�N���肷����@
	'�L���ȓ��t���`�F�b�N
	Debug.Print IsDate("11/1/2017") ' True


�����t�̃t�H�[�}�b�g�ύX
str = Format(�Ώە�(Date�Ȃǂ̓��t), "yyyy/mm/dd")
PC�̐ݒ�ɂ����Date�Ŏ擾�������t�̃t�H�[�}�b�g���o���o���������肷��̂Łc


Dim str As String
str = "17�N9��1�� 2��2��2�b"

Debug.Print Format(str, "Long Date")                 ' 2017�N9��1��
Debug.Print Format(Now, "Short Time")                ' 02:53
Debug.Print Format(str, "c")                         ' 2017/09/01 2:02:02
Debug.Print Format(str, "yyyy/mm/dd hh:nn:ss AM/PM") ' 2017/09/01 2:02:02 AM
Debug.Print Format("17�N9��1��", "ggge�Nmm��dd��")   ' ����29�N09��01��
Debug.Print Format("����29�N9��1��", "yy/mm/dd")     ' 17/09/01
Debug.Print Format("17�N9��1�� 2��2��2�b", "ddd")    ' Fri
Debug.Print Format("17�N9��1�� 2��2��2�b", "aaaa")   ' ���j��






�E���[�U�[��`�����񏑎�
	���� |����
	-----+--------------------------------------------------------------------------------------------
	@    |�C�ӂ�1�����B���݂��Ȃ��ƃX�y�[�X��Ԃ�
	&    |�C�ӂ�1�����B���݂��Ȃ��Ƃ��X�y�[�X��Ԃ��Ȃ�
	<    |�������ɕϊ�
	>    |�啶���ɕϊ�
	!    |������������E�ɖ��߂�
		Dim str As String
		str = "123"
		Debug.Print "[" & Format(str, "@�A@�A@") & "]"         '[1�A2�A3]
		Debug.Print "[" & Format(str, "@@") & "]"              '[123]
		Debug.Print "[" & Format(str, "@@@") & "]"             '[123]
		Debug.Print "[" & Format(str, "@@@@") & "]"            '[ 123]
		Debug.Print "[" & Format(str, "@@@@@") & "�ł�" & "]"  '[  123�ł�]
		Debug.Print "[" & Format(str, "!@@@@@") & "�ł�" & "]" '[123  �ł�]

		Debug.Print "[" & Format(str, "&&") & "]"              '[123] 
		Debug.Print "[" & Format(str, "&&&") & "]"             '[123]
		Debug.Print "[" & Format(str, "&&&&") & "]"            '[123]
		Debug.Print "[" & Format(str, "&&&&&") & "]"           '[123]
		Debug.Print "[" & Format("ABC", "<&&&&&") & "]"        '[abc]
		Debug.Print "[" & Format("abc", ">&&&&&") & "]"        '[ABC]

�E���[�U�[��`���l����
	���� |����
	-----+--------------------------------------------------------------------------------------------
	0    |���l��1����\���B�w�茅�ʒu�ɒl���Ȃ��ꍇ�A0������B
	#    |���l��1����\���B�w�茅�ʒu�ɒl���Ȃ��ꍇ�A���̌��ɂ͉�������Ȃ��B
	     | �����w�肵���u#�v��葽���ꍇ�A���ׂĕ\�������B	
	%    |���l��100�{�ɂ��āu%�v���t���܂��B
		Format(123,"0000")     '0123
		Format(123,"00")       '123
		Format(123,"####")     '123
		Format(123,"##")       '123
		Format(0.123,"0.0000") '0.1230
		Format(0.456,"0.00")   '0.46
		Format(0.456,"#.##")   '46
		Format(0.4567,"0.#%")  '45.7%

�����G���[����
���G���[�����̒�`
''�f�t�H���g�ł�On Error Goto 0 ���L���B
	On Error Resume Next ' �G���[���������Ă��������ď����𑱂���
	On Error Goto Hoge   ' �G���[����������ƁA�w�肵�����x���ɏ������ڂ�
	On Error Goto 0      ' �G���[�����𖳌��ɂ������B�G���[�����������s�ŏ����𒆒f���܂��B

1.On Error Resume Next�̗�
	On Error Resume Next
	Dim i As Integer
	i = "����"        ' �� 1.�u�^�̕s��v�v�ŃG���[����
	MsgBox "�����I��" ' �� 2.���̍s�̏����𑱂���
	On Error Goto 0 ' ����ȍ~�̓G���[���ɒ��f����

2.On Error Goto ���x���̗�
	On Error Goto ErrorProc
	Dim i As Integer
	i = "����"        ' �� 1.�u�^�̕s��v�v�ŃG���[����
	MsgBox "�����I��"
ErrorProc:
	MsgBox "�G���[����" ' �� 2.�u���x��(ErrorProc)�v�ɏ������ڂ�B

3.On Error Goto 0�̗�
	On Error Goto 0
	Dim i As Integer
	i = "����"        ' �� 1.�u�^�̕s��v�v�ŃG���[�����B�����ŏ����I���B
	MsgBox "�����I��"
	On Error Goto 0�̏ꍇ�A�G���[����������Ƃ��̍s�ŏ��������f���܂��B

���G���[�̓��e��m��
1.Err�I�u�W�F�N�g��On Error Goto ���x���̗�
	On Error Goto ErrorProc
	Dim i As Integer
	i = "����" ' �^�̕s��v�ŃG���[����
	MsgBox "�����I��"

	ErrorProc:
	MsgBox "�G���[�ԍ�:" & Err.Number
	MsgBox "�G���[���e:" & Err.Description

2.Err�I�u�W�F�N�g��On Error Resume Next�̗�
	On Error Resume Next
	Dim i As Integer
	i = "����" ' �^�̕s��v�ŃG���[����
	If Err.Number <> 0 Then
	  Msgbox "�G���[����"
	End If

��On Error�̎g��������
�EOn Error Goto ���x�� ���g�p����̂���ʓI�B
�E�G���[�������ɏ����𒆒f�������Ȃ��ꍇ�́AOn Error Resume Next
�E�A�v���P�[�V�����ŃG���[�ӏ�������ł��Ȃ��ꍇ��f�o�b�O����
  On Error Goto 0 �ŏ����𒆒f�����āA�������s���܂��B
  �����𒆒f���Ă��܂����߁A�f�o�b�O���ȊO�͗��p���Ȃ��̂���ʓI

���G���[��񖳌���
Err.Clear


�����ȈՃ_�C�A���O
�� ���b�Z�[�W���� : InputBox
Dim message As String
message = InputBox("���b�Z�[�W����͂��Ă�������")

�� ���b�Z�[�W�o�� : MsgBox
'���b�Z�[�W�̂ݏo��
MsgBox "Output Message"

'Yes/No�̑I��
If MsgBox("Output Messag", vbYesNo) = vbYes Then
    ' Yes�̏���
Else
    ' No�̏���
End If

'OK/Cancel�̑I��
If MsgBox("Output Messag", vbOKCancel) = vbOK Then
    ' OK�̏���
End If

n = MsgBox("�T���v���e�L�X�g", vbOKCancel)    '�߂�l(n) �FOK��1, �L�����Z����2
n = MsgBox("�T���v���e�L�X�g", vbYesNoCancel) '�߂�l(n)�F�͂���6, ��������7, �L�����Z����2
n = MsgBox("�T���v���e�L�X�g", vbYesNo)       '�߂�l(n)�F�͂���6, ��������7
 
'��
If MsgBox("�����ł��B�����܂����H", vbOKCancel) <> 1 Then End
'��yes�ȊO���I�����ꂽ�Ƃ��͏������I�����܂�

'�{�^��
�萔 	�{�^��
vbOkOnly 	OK �̂�
vbOKCancel 	OK, �L�����Z��
vbAbortRetryIgnore 	���~�A�Ď��s�A����
vbYesNo 	�͂��A������
vbRetryCancel 	�Ď��s�A�L�����Z��

'���^�[��
�l 	�Ή�����萔 	�����ꂽ�{�^��
1 	vbOK 	OK
2 	vbCancel 	�L�����Z��
3 	vbAbort 	���~
4 	vbRetry 	�Ď��s
5 	vbIgnore 	����
6 	vbYes 	�͂�
7 	vbNo 	������


��FileDialog���o��
CreateObject("WScript.Shell").CurrentDirectory = �C�ӂ̃p�X '�J���t�H���_���w��
str = Application.GetOpenFilename("̧��,*.*")
'str�ɂ͑I�����ꂽ�t�@�C���̃t���p�X�A�L�����Z�����ɂ�False���Ԃ�
'str��String�Ő錾���Ă���Ƃ��ɂ�
If str = "False" Then Exit Sub
'�̂悤��""�Ŋ����ăG���[����������iVariant�Ő錾�����ق����y�����j

��FileDialog����t�@�C�������擾
Function FileDialog����t�@�C�������擾()
    Dim fname As Variant
    fname = Application.GetSaveAsFilename( _
            InitialFileName:="test.txt", _
            filefilter:="�e�L�X�g�t�@�C��,*.txt", _
            Title:="�t�@�C���ۑ�")
    If VarType(fname) = vbBoolean Then
        MsgBox "�L�����Z������܂����B"
        printDialog = ""
    Else
        printDialog = fname
    End If
End Function


����������Ƃ����X�j�y�b�g

���t�H���_�E�t�@�C���̌���
str = Dir(�Ώە�, ����) '�����F0���t�@�C��,16���t�H���_
'���݂���ꍇ�͂��̖��O���A���݂��Ȃ����""��Ԃ�
 
'��
If Dir(fol, 16) = "" Then '�t�H���_�����݂��Ȃ����
  If MsgBox("�Y���t�H���_�����݂��܂���B�쐬���܂����H", vbOKCancel) = vbOK Then
    MkDir fol '�t�H���_�쐬�i�ϐ�fol�̓t���p�X�ł��邱�Ɓj
  End If
End If

���V�[�g������
Dim fnd As Range, str As String
Dim row1 As Integer, col1 As Integer
 
str = "sample" '����������
 
Set fnd = Range("A1:C100").Find(str) '����
If Not fnd Is Nothing Then '���������Ƃ�
  fnd.Font.ColorIndex = 3 '�Y���Z���̃t�H���g��Ԃ�
  row1 = fnd.Row '�Y���Z���̍s�擾
  col1 = fnd.Column '�Y���Z���̗�擾
End If


��������
Application.ScreenUpdating = False
'����
Application.ScreenUpdating = True ' ����s�v�ȋ^���B
�i�������킹�Ďg���Ƃ���

���֐��̏�����
Sub sample() '�T�u���[�`��
  Dim beforeValue As �����O�̌^, afterValue As ������̌^
 
  afterValue = getFnc(beforeValue) 'beforeValue���֐��ֈ��n���ĕԂ�l��afterValue��
End Sub
	
Function getFnc(ByVal before_value As �����O�̌^) As ������̌^ '�֐�
  'before_value���g���Ă��낢�돈������
  getFnc = �������� '���̒l���T�u���[�`����afterValue�ɓ���
End Function

����̃A���t�@�x�b�g�𐔒l�ցA���l���A���t�@�x�b�g�֕ϊ�
Sub Range�^�̗񖼕ϊ�()
  Dim va As Variant, c_va As Variant
  va = "AA" '��̃A���t�@�x�b�gor���l
  c_va = CNumAlp(va) 'va���֐��ֈ��n����c_va�֕ϊ���̒l���i�[
  MsgBox "�ϊ���̒l��" & c_va & "�ł�"
End Sub

Function CNumAlp(va As Variant) As Variant '�ϊ�����֐�
  Dim al As String
  If IsNumeric(va) = True Then '���l��������
    al = Cells(1, va).Address(RowAbsolute:=False, ColumnAbsolute:=False) '$������Address�擾
    CNumAlp = Left(al, Len(al) - 1)
  Else '�A���t�@�x�b�g��������
    CNumAlp = Range(va & "1").Column '��ԍ����擾
  End If
End Function

���i�����X�e�[�^�X�o�[�ɕ`��
Sub �X�e�[�^�X�o�[�i���\��()
    Dim i As Long
    For i = 1 To 20000
        If i Mod 1000 = 0 Then
            Range("A1") = i
            Application.StatusBar = "������..." & String(Int(i / 1000), "��")
        End If
    Next i
    Application.StatusBar = False ' �g�����猳�ɖ߂��I
End Sub

���^�C�g���o�[����
Application.Caption = "�^�C�g��"
Application.Caption = vbNullString ' �g�����猳�ɖ߂��I


���e�L�X�g���o��
Private Sub OutputTextList(datFile As String, doc As Collection)
    Open datFile For Output As #1
    Dim e As Variant
    For Each e In doc
        Print #1, e
    Next e
    Close #1
End Sub

Private Function InputText(path As String) As Collection
    Dim ret As Collection
    Set ret = New Collection
    Dim buf As String

    Open path For Input As #1 ' Input�F����
    Do Until EOF(1)
        Line Input #1, buf
        ret.Add buf
    Loop
    Close #1
    Set InputText = ret
End Function

���������ꎞ�I�ɓn��(DoEvents) 
'�N���b�N��L�[���͂�`��̏����𒼂��Ɏ��s���܂��B
Dim i As Long
For i = 0 To 10000
	' ���炩�̏���
	' 100 ��� 1 ����͂��󂯕t����B
	If i Mod 100 = 0 Then
		DoEvents()
		' �L�����Z���{�^�����N���b�N���ꂽ�����肷��Ȃ�
	End If
Next

���z��ɃZ����������
'A��ɂ͖��O��10,000�����Ă��܂��B
'�����̖��O�ɊY�����鐔�l���A�Z���͈�D2:E6�ɓ��͂���Ă���B
'A��̖��O�ɊY�����鐔�l���AVLOOKUP�֐��Œ��ׁA���ꂼ��B��ɑ�����Ă����܂��B

'��1_�]���̗�
Sub Sample1()
    Dim i As Long, B As Variant
    B = Range("A1:A10001")
    For i = 2 To 10001
        Cells(i, 2) = WorksheetFunction.VLookup(B(i, 1), Range("D2:E6"), 2, False)
    Next i
End Sub

'��1���A�yRange = value�z ��1��ōς܂���ƁA�����B
' �|�C���g�͔z����Z���ɑ�����邱��
Sub Sample2()
    Dim i As Long, B As Variant
    ReDim B(9999, 0)
    For i = 2 To 10001
        B(i - 2, 0) = WorksheetFunction.VLookup(Cells(i, 1), Range("D2:E6"), 2, False)
    Next i
    Range("B2:B10001") = B '�������N���e�B�J��
End Sub

'��2�A��1����ėp�I�Ȕ͈͂Ŏ�������
Sub Sample3()
    Dim i As Long, B As Variant, n As Long
    n = Cells(Rows.Count, 1).End(xlUp).Row
    ReDim B(n - 2, 0)
    For i = 2 To n
        B(i - 2, 0) = WorksheetFunction.VLookup(Cells(i, 1), Range("D2:E6"), 2, False)
    Next i
    Range(Range("A2"), Cells(Rows.Count, 1).End(xlUp)).Offset(0, 1) = B
End Sub

��Sleep(�O��API�g�p)
	Private Declare Sub Sleep Lib "kernel32" (ByVal ms As Long)'API�錾(32bit)
	Private Declare PtrSafe Sub Sleep Lib "kernel32" (ByVal ms As LongPtr)'API�錾(64bit)
	sleep 1000 '1�b�X���[�v

���f�[�^�^���m�F����
'TypeName() �Ńf�[�^�^�𕶎���Ŏ擾�ł���B
Dim a As String
Dim b As Boolean
Dim c As New Collection
Debug.Print "a : " & TypeName(a) 'a : String
Debug.Print "b : " & TypeName(b) 'b : Boolean
Debug.Print "c : " & TypeName(c) 'c : Collection

��Collection �� �z�� �ϊ�
'(1)Collection���z��ϊ��֐�
Private Function CollectionToArray(ByVal col As Collection) As Variant
	Dim resultArray() As Variant
	Dim idx As Long : idx = 0
	Dim e As Variant
	' �z��̃T�C�Y��0�ł͂Ȃ��ꍇ�A�擾�����T�C�Y�Ŕz����쐬
	If col.Count <> 0 Then
		ReDim resultArray(col.Count - 1)
	End If
	' �Ē�`�����z���Collection�̓��e���i�[
	For Each e In col
		resultArray(idx) = e
		idx = idx + 1
	Next
	CollectionToArray = resultArray 
End Function

'�^�p��(Collection���z��ϊ��֐�)
Sub Collection���z��ϊ�()
	Dim items As Collection
	Set items = New Collection
	items.Add 10
	items.Add 30
	items.Add 50
	Dim ary() As Variant
	ary = CollectionToArray(items)
	Dim e As Variant
	For Each e In items
	Debug.Print e
	Next e
End Sub

'(2)�z��Collection�ϊ��֐�
Private Function ArrayToCollection(ary As Variant) As Collection
	Dim e As Variant
	Dim col As Collection
	Set col = New Collection
	For Each e In ary
		col.Add e
	Next e
	Set ArrayToCollection = col
End Function

'�^�p��(�z��Collection�ϊ��֐�)
Sub �z��Collection�ϊ�()
	Dim ary() As Variant
	Dim item As Collection
	Dim e As Variant
	ary = Array(1, 3, 5, 7, 9)
	Set item = ArrayToCollection(ary)
	For Each e In item
		Debug.Print e
	Next e
End Sub


����FSO�AWSO�ȂǊO��API
��Dictionary�I�u�W�F�N�g
' �錾
Dim �A�z�z�� As Object
Set �A�z�z�� = CreateObject(�gScripting.Dictionary�h)
�������́A
Dim �A�z�z�� As New Scripting.Dictionary'�Q�Ɛݒ�uMicrosoft Scripting Runtime�v�Ƀ`�F�b�N


��Gcad
Sub GetAcad()
    On Error Resume Next
    Set GcadApp = GetObject(, "GCAD.Application")
        If Err Then
           Set GcadApp = CreateObject("GCAD.Application")
           Err.Clear
        End If
    Set GcadDoc = GcadApp.ActiveDocument
    GcadApp.Visible = True
    '�L���͂�������------------------------------------
    Dim test As String
    For i = 1 To 9
        test = test & Cells(i, 1).Value & Chr(13)
    Next
    'IJCAD�ɑ��M---------------------------------------
    GcadDoc.SendCommand "model" & Chr(13) & test
End Sub



' 
�v���p�e�B�F
Count              �F�A�z�z��Ɋi�[���ꂽ�v�f�̐�
Item(key)          �F�L�[�Ɋ֘A�t����ꂽ����
Key(key)           �F�L�[
CompareMode        �F�L�[����ʂ���ۂɁA�啶���Ə���������ʂ��邩�ۂ��w��
  vbBinaryCompare(0) �F�啶���Ə����������
  vbTextCompare(1)   �F�啶���Ə���������ʂ���
'Dictionary�I�u�W�F�N�g�̓L�[���d�������邱�Ƃ͂ł��܂��񂪁A
'CompareMode�v���p�e�B���g���ăL�[�̑啶������������ʂ��邩�ǂ����ݒ�ł��܂��B

���\�b�h�F
Add key, item   �F�L�[�ɍ��ڂ��֘A�t���Ēǉ�
Exists(key)     �F�w�肵���L�[�����݂����True��Ԃ�
Items           �F�A�z�z��̍��ڂ�z��ɂ��ĕԂ��B
Keys            �F�A�z�z��̃L�[��z��ɂ��ĕԂ��B
Remove key      �F�L�[�ƍ��ڂ̃y�A���폜
RemoveAll       �F�S�ẴL�[�ƍ��ڂ��폜

'��{
Dim Map As New Dictionary
Map("hoge") = "Hoge"
Debug.Print "hoge: " & Map("hoge")

�܂킵���F
Set myDic = CreateObject("Scripting.Dictionary")
�F
Dim Keys() As Variant
Keys = myDic.Keys
For i = 0 To 2
    Debug.Print Keys(i)
Next i
For Each e In myDic
    Debug.Print myDic.Item(e)
Next Var

�ǉ����̒���
key = "hoge"
If myDic.Exists(key) Then '���݂��邩�m�F���Ȃ��ƃG���[�ɂȂ�B
    myDicAdd key "fuga"
Else
    MsgBox key & "�͍폜�ł��܂���", vbInformation
End If

�폜���̒��ӁF
key = "hoge"
If myDic.Exists(key) Then '���݂��邩�m�F���Ȃ��ƃG���[�ɂȂ�B
    myDic.Remove key
Else
    MsgBox key & "�͍폜�ł��܂���", vbInformation
End If


�������[�N�u�b�N�C�x���g�A���[�N�V�[�g�C�x���g

�����N���X�̎g����
���N���X�̎g����Lv.0(�f�[�^�N���X)
�E�\���̂ł�Collection�͎g���Ȃ��B�B�B(�z��Ȃ�g����)
Sub �f�[�^�N���X()
    Dim cWordFileInfo As WordFileInfo
    Dim items As Collection
    Set items = New Collection
    Dim idx As Long
    For idx = 1 To 5
        Set cWordFileInfo = New WordFileInfo
        cWordFileInfo.ID = idx
        cWordFileInfo.Name = CStr(idx * 2)
        items.add cWordFileInfo
    Next idx
    Dim e As Variant
    For Each e In items
        Debug.Print "ID:"; e.ID & ",Name:" & e.Name
    Next e
End Sub

'/**************************************/
'�N���X���W���[���uWordFileInfo�v
'Option Explicit
'
'Public ID As Long
'Public Name As String
'/**************************************/

���N���X�̎g����Lv.1(�����o�֐�)
Sub �����o�[�֐����g��()
    Dim p As Person
    Set p = New Person
    p.Name = "Kbt"
    Debug.Print "Age: " & p.GetAge()
    Call p.SayHello
    Set p = Nothing
End Sub

'Person(�N���X���W���[��)
'
'Option Explicit
'
' �v���p�e�B
'Public  Name   As String
'Private Age    As Long
'Public  Mother As Person
'
' ���\�b�h(�����Ȃ��A�߂�l�Ȃ�)
'Public Sub SayHello()
'    MsgBox "Hello, I'm " & Name & "!"
'End Sub
' ���\�b�h(��������A�߂�l�Ȃ�)
'Public Function SayHelloTo(otherPersonName As String) As Person
'    MsgBox "Hello, " & otherPersonName & "!" & vbNewLine & "I'm " & Name & "!"
'End Function
' ���\�b�h(�����Ȃ��A�߂�l����)
'Public Function GetAge() As Long
'    GetAge = Age
'End Function
' ���\�b�h(�����Ȃ��A�߂�l����(�I�u�W�F�N�g))
'Public Function GetMother() As Person
'    Set GetMother = Mother  '�iSet�����邱�ƁI�j
'End Function
'
' ����������(�R���X�g���N�^)
'Private Sub Class_Initialize() ' �Ӑ}�I��Private�ɂ��邱��
'    Name = "Bob"
'    Age = 30
'    Set Mother = Nothing
'    Debug.Print "initalized"
'End Sub
' �I��������(�f�X�g���N�^)
'Private Sub Class_Terminate() ' �Ӑ}�I��Private�ɂ��邱��
'    Name = ""
'    Age = 0
'    Set Mother = Nothing
'    ' ���̑��A�g�p���Ă��郊�\�[�X�̉���������s��
'    Debug.Print "terminated"
'End Sub

���N���X�̎g����Lv.2(�v���p�e�B�BGet�ASet/Let)
�W�����W���[��
Sub test1()
    Dim p As Person
    Set p = New Person
    p.MyName = "Bob"
    Dim mom As Person
    Set mom = New Person
    Set p.MyMother = mom
    Debug.Print "age: " & p.MyAge
    Call p.SayHello
    Set p = Nothing
End Sub

'Person(�N���X���W���[��)
'
'Option Explicit
'
' �v���p�e�B
'Private Name   As String '�����o�ϐ����B��
'Private Age    As Long   '�����o�ϐ����B��
'Private Mother As Person 
'
' ����������(�R���X�g���N�^)
'Private Sub Class_Initialize()
'    Name = "Bob"
'    Age = 30
'    Set Mother = Nothing
'    Debug.Print "initalized"
'End Sub
' �I��������(�f�X�g���N�^)
'Private Sub Class_Terminate()
'    Name = ""
'    Age = 0
'    Set Mother = Nothing
'    ' ���̑��A�g�p���Ă��郊�\�[�X�̉���������s��
'    Debug.Print "terminated"
'End Sub
'
' ���\�b�h(�����Ȃ��A�߂�l�Ȃ�)
'Public Sub SayHello()
'    MsgBox "Hello, I'm " & Name & "!"
'End Sub
' ���\�b�h(��������A�߂�l�Ȃ�)
'Public Function SayHelloTo(otherPersonName As String) As Person
'    MsgBox "Hello, " & otherPersonName & "!" & vbNewLine & "I'm " & Name & "!"
'End Function
'
' �v���p�e�B�v���V�[�W��
''�E�����o�ϐ��ւ̒��ڃA�N�Z�X������A���ډ����������
''  (��O�l�ݒ�Ȃǂ������Ȃ�)
''�E�l��ݒ肷��Ƃ��A
''�l�^�Ȃ��Let�A�I�u�W�F�N�g�^�Ȃ��Set���g���܂��B
''�l�̎擾�́A�ǂ����Get�ł��B
'
'' �擾�֐��uGet�v
'Property Get MyName() As String
'    MyName = Name
'End Property
'
'' �i�[�֐��uLet�v
'Property Let MyName(namae As String)
'    If namae = "" Then ' �������u�����N�Ȃ�G���[
'        Err.Raise 10000, , "���O���u�����N�ł�"
'    End If
'    Name = namae
'End Property
'
''�uGet�ALet�ASet�v�̎g����
'Property Get MyAge() As Long ' 5�΂��΂�ǂ�ł݂�
'    MyAge = Age - 5
'End Property
'Property Get MyMother() As Person
'    Set MyMother = Mother
'End Property
'Property Set MyMother(haha As Person)
'    Set Mother = haha
'End Property

��Lv3.�f�t�H���g�v���p�e�B��ݒ肷��
�E�f�t�H���g�v���p�e�B�Ƃ́ARange�I�u�W�F�N�g��Value�v���p�e�B�ȂǁA
  �v���p�e�B���ȗ�����Ǝ擾������̂��ƁB�B

1.����N���X���쐬����B
	'Person(�N���X���W���[��)
	Private Name As String' �v���p�e�B
	' ���\�b�h
	Public Sub SayHello()
	    MsgBox "Hello, I'm " & Name & "!"
	End Sub
	' �v���p�e�B�v���V�[�W��
	Property Get MyName() As String
	    MyName = Name
	End Property
	Property Let MyName(namae As String)
	    If namae = "" Then ' �������u�����N�Ȃ�G���[
	        Err.Raise 10000, , "���O���u�����N�ł�"
	    End If
	    Name = namae
	End Property

2.����Person�N���X���G�N�X�|�[�g����B�i�G�N�X�v���[������D&D�j
3.�G�N�X�|�[�g����.cls�t�@�C�����e�L�X�g�G�f�B�^�ŊJ���A
  �f�t�H���g�ɂ������v���p�e�B�̐擪�s��Attribute Value.VB_UserMemId = 0�Ɠ���܂��B
�`cls�t�@�C���`
Property Get MyName() As String
    Attribute Value.VB_UserMemId = 0 ' �uMyName�v�v���p�e�B���f�t�H���g�ɂ���B
    MyName = Name
End Property

4.���̃C���|�[�g����B
�������ڂ͕ω��͂���܂��񂪁A�f�t�H���g�v���p�e�B�ɐݒ肳��Ă��܂��B

5.�W�����W���[���ɂē�����m�F�B
�`�W�����W���[���`
Sub test1()
	Dim p As Person
	Set p = New Person
	p = "taro"
	Debug.Print p   ' => "taro"
End Sub

��Lv4.For Each�ŉ񂹂�悤�ɂ���
1.�Z���������������ĊǗ��ł���N���X���l����B
	For Each�ŉ񂵂������̂�Collection�ɓ���Ă����A
	����N���X��NewEnum�̒���Collection��_NewEnum���Ăяo���܂��B

	CellManager(�N���X���W���[��)
		Option Explicit
		Public Cells As Collection
		Private Sub Class_Initialize()
		    Set Cells = New Collection
		End Sub
		Public Sub Add(newCell As Range)
		    Cells.Add newCell
		End Sub
		Public Function Item(Index As Long) As Range
		    Set Item = Cells(Index)
		End Function
		'NewEnum�Ƃ����̂��`����̂��́B
		Public Function NewEnum() As stdole.IUnknown
		    Set NewEnum = Cells.[_NewEnum]
		End Function

2.�N���X���W���[�����G�N�X�|�[�g���ăe�L�X�g�G�f�B�^�ŊJ���B
	cls�t�@�C��
		Public Function NewEnum() As stdole.IUnknown
		Attribute NewEnum.VB_UserMemId = -4   ' ���̍s��ǉ��I
		    Set NewEnum = CellCollection.[_NewEnum]
		End Function

3.�C���|�[�g����
4.�W�����W���[���ɂē�����m�F�B
�`�W�����W���[���`
Sub test1()
    Dim cm As New CellManager
    Dim c As Range

    Range("A1").Value = "A"
    Range("A2").Value = "B"
    cm.Add Range("A1")
    cm.Add Range("A2")

    For Each c In cm
        Debug.Print c.Value
    Next
End Sub

����Application�N���X�̃����o�[(���܂Ƃ�)
GetOpenFilename���\�b�h
�t�@�C���I���_�C�A���O���g���B
Sub �t�@�C���I���_�C�A���O()
  Dim strFilePath As String
  strFilePath = Application.GetOpenFilename(Filefilter:="Excel�u�b�N,*.xlsx,CSV�t�@�C��,*.csv")   '�t�@�C���p�X���擾
  Debug.Print "�I�������t�@�C���p�X�F" & strFilePath
End Sub

Run���\�b�h
���̃u�b�N�̃}�N���𓮂������\�b�h�B
�uApplication.Run �u�b�N��!�v���V�[�W���[��,����1~30�v�Ŏw�肵���}�N�������s�ł���B

Book1.xlsm�T���v���R�[�h�F
Sub Test_Run()
  Application.Run "Book1.xlsm!Test", "�ʂ̃u�b�N�̃}�N�������s���܂���"  '�ʃu�b�N�̃}�N�����s

Book2.xlsm�T���v���R�[�h�F
Sub Test(strMessage As String)
  MsgBox strMessage
End Sub
���̂悤�ɁA�ȒP�ɕʃu�b�N�̃}�N�������s���邱�Ƃ��ł��܂��B�B

Displayalerts�v���p�e�B
�t�@�C���̍폜�E�u�b�N�̍폜�E�V�[�g�̍폜�ŁA�폜�m�F���b�Z�[�W��\�����������Ȃ��Ƃ��Ɏg���B
True�ŕ\���AFalse�Ŕ�\��

Sub ���b�Z�[�W��\���Ŋe�폈���Ńu�b�N�ۑ�����()
  Dim wb1 As Workbook
  Set wb1 = Workbooks.Add   '�u�b�N�쐬
  '�u�b�N�ۑ�
  Application.DisplayAlerts = False '���b�Z�[�W���\��
  wb1.SaveAs Filename:=ThisWorkbook.Path & "\" & "SaveAs�ŕۑ������t�@�C��.xlsx" '"
  Application.DisplayAlerts = True  '���b�Z�[�W���ĕ\��
  wb1.Close   '�u�b�N�����
End Sub

Wait���\�b�h
�������w�莞�Ԏ~�߂邱�Ƃ��ł��郁�\�b�h

'Now�֐��Ō��ݎ������擾�ATimeValue(�g00:00:01�h)�𑫂����Ƃ�1�b����������
Application.Wait Now() + TimeValue("00:00:01") 


CutCopyMode�v���p�e�B
�R�s�[���(�_���͈�)���������邽�߂̃v���p�e�B
�T���v���R�[�h�F
Sub Test()
  Activesheet.Range("A3:C3").Copy Activesheet.Range("A10:C10") '�R�s�[
  Application.CutCopyMode = False '�R�s�[��Ԃ̃N���A
End Sub


OnTime���\�b�h
�w�肵�������ɏ��������s����

OnTime(�}�N�����s����, ���s����v���V�[�W����)
'12����showMessage�v���V�[�W�������s����T���v���R�[�h�F
'���C������
Sub Main()
  Application.OnTime TimeValue("12:00:00") , "showMessage"
End Sub

'���b�Z�[�W��\�����鏈��
Sub showMessage()
  MsgBox "12:00���ɂȂ�܂����B1���ԋx�e���Ă��������B"
End Sub

Calculation�́A�����v�Z���蓮�v�Z�ɕς��邱�Ƃ��ł���v���p�e�B�B
�����v�Z�A�蓮�v�Z���ȒP�ɐ؂�ւ��邱�Ƃ��ł��܂��B
�Z���ɒl���i�[����Čv�Z������ƁA���x�ɉe������̂ŁA�l�i�[���͎蓮�v�Z�ɂ��Ă����Ƃ����B

�T���v���R�[�h�F
Sub Test()
  Application.Calculation = xlCalculationManual     '�蓮�v�Z
  Application.Calculate   '�Z���̒l���g���Čv�Z�������Ƃ��̂ݍČv�Z���s
  Application.Calculation = xlCalculationAutomatic  '�����v�Z
End Sub


Statusbar �v���p�e�B
�X�e�[�^�X�o�[�ɒl��\�����邽�߂̃v���p�e�B�B
Sub Test()
    Dim i As Long
    For i = 1 To 1000
        Application.StatusBar = i & "��ڂ̏������s���c"
    Next i
    Application.StatusBar = False
End Sub




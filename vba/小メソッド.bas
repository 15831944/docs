
��������̃Z�����󔒂̏ꍇ�A���̍s���폜
'/**************************************************/
' �@�\:����̃Z�����󔒂̏ꍇ�A���̍s���폜
'
' ����:(I) col ��ԍ�
'
' �Ԃ�l:   �Ȃ�
'
' �@�\����:
'
' ���l:
'
'/**************************************************/
Sub ����̃Z�����󔒂̏ꍇ���̍s���폜(col As Long)
	Dim lRow As Long
	Dim i As Long
	Application.ScreenUpdating = False
	lRow = Cells(Rows.Count, col).End(xlUp).Row ' = �ŏI�s�̒l(65536)
	For i = lRow To 2 Step -1
		If Cells(i, 1).Value = "" Then
			Cells(i, 1).EntireRow.Delete
		End If
	Next i
End Sub

�����摜�݂̂Ȃ炸�}�`�́A�Ƃɂ����Ȃ�ł�����
'/**************************************************/
' �@�\:�摜�݂̂Ȃ炸�}�`�́A�Ƃɂ����Ȃ�ł�����
'
' ����:�Ȃ�
'
' �Ԃ�l:�Ȃ�
'
' �@�\����:
'
' ���l:
'
'/**************************************************/
Private Sub IMAGE_DELETE_allShapes()
    Dim MyOb As Object
    Dim i1, i2, i3 As Integer
    i1 = ActiveSheet.Shapes.Count
    i2 = ActiveSheet.DrawingObjects.Count
    i3 = ActiveSheet.Pictures.Count
    For Each MyOb In ActiveSheet.Shapes
        MyOb.Delete
    Next
    MsgBox ( _
        "�V�[�g���̃I�[�g�V�F�C�v �̐�:" & i1 & "��" & ActiveSheet.Shapes.Count & vbCrLf & _('Drop Down
        "�V�[�g����DrawingObject�̐�:" & i2 & "��" & ActiveSheet.DrawingObjects.Count & vbCrLf & _'���e�L�X�g�{�b�N�X��t�L�_�V
        "�V�[�g����Picture �̐�:" & i3 & "��" & ActiveSheet.Pictures.Count)'���摜
End Sub


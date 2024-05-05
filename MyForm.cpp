#include <sstream>
#include "MyForm.h"
#include "Exceptions.h"
#include "List.h"

System::Void ooplab9progslr::MyForm::ChangeCheck(System::Object^ sender, System::EventArgs^ e)
{
  if (list1_rb->Checked)
  {
    SelectedIndex = 0;
  }
  else
  {
    SelectedIndex = 1;
  }
}

System::Void ooplab9progslr::MyForm::UpdateListLabel()
{
  std::ostringstream oss;
  oss.precision(2);
  try
  {
    oss << arr[SelectedIndex];

  }
  catch (IS_OS_ErrorException& e)
  {
    MessageBox::Show(gcnew String(e.GetMessage()));
  }
  if (!SelectedIndex)
  {
    list1_lbl->Text = (gcnew String(oss.str().c_str()));
  }
  else
  {
    list2_lbl->Text = (gcnew String(oss.str().c_str()));
  }
}
System::Void ooplab9progslr::MyForm::UpdateListLabel(Label^ label)
{
  std::ostringstream oss;
  oss.precision(2);
  try
  {
    oss << arr[2];
  }
  catch (const IS_OS_ErrorException& ex)
  {
    MessageBox::Show(gcnew String(ex.GetMessage()));
  }
  label->Text = Convert::ToString(gcnew String(oss.str().c_str()));
}
System::Void ooplab9progslr::MyForm::add_btn_Click(System::Object^ sender, System::EventArgs^ e)
{
  try {
    double valueToAdd = System::Convert::ToDouble(addelem_tb->Text); 
    int index = System::Convert::ToInt32(index_tb->Text);
    arr[0].add_at_index(index, valueToAdd); 
  }
  catch (const LackOfMemoryException& ex) {
    MessageBox::Show(gcnew String(ex.GetMessage()));
  }
  UpdateListLabel();
}
System::Void ooplab9progslr::MyForm::MyForm_Load(System::Object^ sender, System::EventArgs^ e) 
{
  list1_rb->Select();
  SelectedIndex = 0;
  arr = new CDoubleLinkedList[3];
}

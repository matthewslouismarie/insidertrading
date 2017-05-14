#include "CompanyContextualMenu.h"

#include "NullContextualMenuChoice.h"

namespace it
{
  CompanyContextualMenu::CompanyContextualMenu()
  {
    choices_.push_back (new NullContextualMenuChoice ("Null Prout", true));
    choices_.push_back (new NullContextualMenuChoice ("Prout Prout", true));
  }



  CompanyContextualMenu::~CompanyContextualMenu()
  {
    for (auto c : choices_) {
      delete c;
    }
  }



  I_ObservableId const & CompanyContextualMenu::getObservableId() const
  {
    return observableId_;
  }



  std::vector<I_ContextualMenuChoice*> CompanyContextualMenu::getChoices() const
  {
    return choices_;
  }



  unsigned int CompanyContextualMenu::getLongestChoiceCharacterCount() const
  {
    return 10;
  }



  unsigned int CompanyContextualMenu::getNumberOfChoices() const
  {
    return choices_.size();
  }



  void CompanyContextualMenu::addChoice (I_ContextualMenuChoice & contextualMenuChoice)
  {

  }
}
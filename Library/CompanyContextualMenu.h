#pragma once

#include <set>

#include "I_ContextualMenu.h"
#include "DefaultObservableId.h"
#include "Company.h"
#include "GameData.h"

namespace it
{

  class CompanyContextualMenu : public I_ContextualMenu
  {
    std::vector<I_ContextualMenuChoice *> choices_;
    GameData &                            gameData_;
    DefaultObservableId                   observableId_;

  public:
    CompanyContextualMenu (Company &, GameData &);
    ~CompanyContextualMenu();

    // Inherited via I_ContextualMenu
    virtual I_ObservableId const & getObservableId() const override;
    virtual std::vector<I_ContextualMenuChoice*> getChoices() const override;
    virtual unsigned int getLongestChoiceCharacterCount() const override;
    virtual unsigned int getNumberOfChoices() const override;
    virtual void addChoice (I_ContextualMenuChoice &) override;
  };
}
#include "ChatInputWidget.h"
#include "Components/EditableTextBox.h"
#include "NumberBaseballPlayerController.h"

void UChatInputWidget::NativeConstruct()
{
	Super::NativeConstruct();

	if (ChatTextBox->OnTextCommitted.IsAlreadyBound(this, &ThisClass::ChattingTextInput) == false)
	{
		ChatTextBox->OnTextCommitted.AddDynamic(this, &ThisClass::ChattingTextInput);
	}
}

void UChatInputWidget::NativeDestruct()
{
	if (ChatTextBox->OnTextCommitted.IsAlreadyBound(this, &ThisClass::ChattingTextInput) == true)
	{
		ChatTextBox->OnTextCommitted.RemoveDynamic(this, &ThisClass::ChattingTextInput);
	}
}

void UChatInputWidget::ChattingTextInput(const FText& Text, ETextCommit::Type Commithod)
{
	if (Commithod == ETextCommit::OnEnter)
	{
		APlayerController* OPC = GetOwningPlayer();
		if (IsValid(OPC) == true)
		{
			ANumberBaseballPlayerController* BaseballPC = Cast<ANumberBaseballPlayerController>(OPC);
			if (IsValid(BaseballPC) == true)
			{
				BaseballPC->SetChattingMessage(Text.ToString());

				ChatTextBox->SetText(FText());
			}
		}
	}
}

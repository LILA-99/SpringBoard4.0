/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <UIKit/UITextField.h>

@class UITextInteractionAssistant;

@interface SBFolderTextField : UITextField {
}
@property(readonly, assign, nonatomic) UITextInteractionAssistant* interactionAssistant;
-(id)initWithFrame:(CGRect)frame;
-(CGRect)textRectForBounds:(CGRect)bounds;
-(CGRect)editingRectForBounds:(CGRect)bounds;
@end


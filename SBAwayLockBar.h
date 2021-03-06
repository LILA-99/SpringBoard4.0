/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <TelephonyUI/TPBottomLockBar.h>
#import "SpringBoard-Structs.h"

@class UIButton, NSMutableDictionary;

@interface SBAwayLockBar : TPBottomLockBar {
	UIButton* _bluetoothButton;
	UIButton* _slideshowButton;
	NSMutableDictionary* _orientationToButtonImages;
}
-(void)dealloc;
-(void)setShowsBluetoothButton:(BOOL)button animated:(BOOL)animated;
-(void)setShowsSlideshowButton:(BOOL)button;
-(void)setSlideshowButtonSelected:(BOOL)selected;
-(void)setOrientation:(int)orientation;
-(id)hitTest:(CGPoint)test withEvent:(id)event;
-(id)_newButtonWithAction:(SEL)action tag:(int)tag;
-(id)_unselectedImageForButtonTag:(int)buttonTag interfaceOrientation:(int)orientation;
-(id)_selectedImageForButtonTag:(int)buttonTag interfaceOrientation:(int)orientation;
-(void)_setImagesForButton:(id)button orientation:(int)orientation;
-(void)_setShowsButton:(BOOL)button button:(id*)button2 buttonTag:(int)tag action:(SEL)action animated:(BOOL)animated;
-(void)_bluetoothButtonActivated:(id)activated;
-(void)_slideshowButtonActivated:(id)activated;
@end


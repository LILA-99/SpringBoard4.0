/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <UIKit/UIView.h>

@class UIImage;

@interface SBFolderNotchView : UIView {
	XXStruct_9ihRqB _notchInfo;
	UIImage* _wallpaper;
}
-(id)initWithNotchInfo:(XXStruct_9ihRqB)notchInfo wallpaper:(id)wallpaper;
-(void)dealloc;
-(void)setWallpaper:(id)wallpaper;
-(void)drawRect:(CGRect)rect;
@end


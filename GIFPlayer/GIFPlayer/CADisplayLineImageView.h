//
//  CADisplayLineImageView.h
//  GIFPlayer
//
//  Created by Ali on 16/8/29.
//  Copyright © 2016年 Ali. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CADisplayLineImage.h"
@interface CADisplayLineImageView : UIImageView

@property (nonatomic,copy) NSString *runLoopMode;
/**
 *  @author Ali
 *
 *  流畅播放GIF
 *
 *  @param contentView 需要在显示的View
 *  @param frame       显示的位置
 *  @param imageName   GIF图片名称
 */
+(void)disPlayGIFImageInView:(UIView *)contentView withFrame:(CGRect)frame andGIFImageName:(NSString *)imageName;
@end

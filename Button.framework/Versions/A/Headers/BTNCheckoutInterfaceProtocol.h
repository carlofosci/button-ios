@import Foundation;
@import UIKit;

@protocol BTNCheckoutInterface <NSObject>

@required

/**
 Sets the title text of the navigation bar.

 @param title The desired text.
 */
- (void)setTitle:(NSString *)title;


/**
 Sets the title text color.

 @param titleColor The desired title text color.
 */
- (void)setTitleColor:(UIColor *)titleColor;


/**
 Sets the subtitle text.

 @param subtitle The desired subtitle text.
 */
- (void)setSubtitle:(NSString *)subtitle;


/**
 Sets the subtitle text color.
 
 @param subtitleColor The desired subtitle text color.
 */
- (void)setSubtitleColor:(UIColor *)subtitleColor;


/**
 Sets the background color of the top bar.

 @param color The desired color.
 */
- (void)setTopBarBackgroundColor:(UIColor *)color;


/**
 The tint color for top bar (e.g. bar button items).
 
 @param color The desired tint color.
 */
- (void)setTopBarTintColor:(UIColor *)color;


/**
 Sets the background color of the bottom bar.
 
 @param color The desired color.
 */
- (void)setBottomBarBackgroundColor:(UIColor *)color;


/**
 The tint color for bottom bar (e.g. bar button items).
 
 @param color The desired tint color.
 */
- (void)setBottomBarTintColor:(UIColor *)color;

@end

//
//  AppiraterDelegate.h
//  Break Rush
//
//  Created by Peter Wilde on 9/20/14.
//  Copyright (c) 2014 Wild Thing Studios. All rights reserved.
//

//
//  AppiraterDelegate.h
//  Banana Stand
//
//  Created by Robert Haining on 9/25/12.
//  Copyright (c) 2012 News.me. All rights reserved.
//

#import <Foundation/Foundation.h>

@class Appirater;

@protocol AppiraterDelegate <NSObject>


@optional
-(void)appiraterDidDisplayAlert:(Appirater *)appirater;
-(void)appiraterDidDeclineToRate:(Appirater *)appirater;
-(void)appiraterDidOptToRate:(Appirater *)appirater;
-(void)appiraterDidOptToRemindLater:(Appirater *)appirater;
-(void)appiraterWillPresentModalView:(Appirater *)appirater animated:(BOOL)animated;
-(void)appiraterDidDismissModalView:(Appirater *)appirater animated:(BOOL)animated;
 
@end
//
//  GBHUD-Interface-OSX.h
//  GBHUD
//
//  Created by Luka Mirosevic on 12/05/2013.
//  Copyright (c) 2013 Goonbee. All rights reserved.
//
//  Licensed under the Apache License, Version 2.0 (the "License");
//  you may not use this file except in compliance with the License.
//  You may obtain a copy of the License at
//
//  http://www.apache.org/licenses/LICENSE-2.0
//
//  Unless required by applicable law or agreed to in writing, software
//  distributed under the License is distributed on an "AS IS" BASIS,
//  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//  See the License for the specific language governing permissions and
//  limitations under the License.

#import "GBHUDTypes.h"

typedef enum {
    GBHUDPositioningCenterInMainWindow,
    GBHUDPositioningCenterOnMainScreen,
} GBHUDPositioning;

@interface GBHUD : NSObject

@property (assign, nonatomic, readonly) BOOL            isShowingHUD;
@property (assign, nonatomic) CGSize                    size;
@property (assign, nonatomic) CGFloat                   cornerRadius;
@property (assign, nonatomic) CGSize                    symbolSize;
@property (assign, nonatomic) CGFloat                   symbolTopOffset;
@property (assign, nonatomic) CGFloat                   textBottomOffset;
@property (strong, nonatomic) NSFont                    *font;
@property (strong, nonatomic) NSColor                   *backdropColor;
@property (strong, nonatomic) NSColor                   *textColor;
@property (assign, nonatomic) GBHUDPositioning          positioning;

+(GBHUD *)sharedHUD;

-(void)showHUDWithType:(GBHUDType)type text:(NSString *)text;
-(void)showHUDWithImage:(NSImage *)image text:(NSString *)text;
-(void)showHUDWithView:(NSView *)symbolView text:(NSString *)text;
-(void)dismissHUD;
-(void)autoDismissAfterDelay:(NSTimeInterval)delay;

@end
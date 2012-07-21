//
//  MJNetworkClient.h
//  MegaJam
//
//  Created by Alex Belliotti on 7/20/12.
//  Copyright (c) 2012 CrowdComapss. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "Wijourno.h"

@interface MJNetworkClient : NSObject <NSNetServiceBrowserDelegate>

@property (nonatomic, strong) NSNetServiceBrowser *browser;
@property (nonatomic, strong) NSTimer *timeoutTimer;

@property (nonatomic, assign, getter = isSeeking) BOOL seeking;

- (void)findMegaJams;
- (void)sendData:(NSData *)data;

@end
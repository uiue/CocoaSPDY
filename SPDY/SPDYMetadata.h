//
//  SPDYMetadata.h
//  SPDY
//
//  Copyright (c) 2014 Twitter, Inc. All rights reserved.
//  Licensed under the Apache License v2.0
//  http://www.apache.org/licenses/LICENSE-2.0
//
//  Created by Michael Schore
//


#import <Foundation/Foundation.h>
#import "SPDYDefinitions.h"

@interface SPDYMetadata : NSObject
@property (nonatomic, copy) NSString *version;
@property (nonatomic) SPDYStreamId streamId;
@property (nonatomic) NSInteger latencyMs;
@property (nonatomic) NSUInteger txBytes;
@property (nonatomic) NSUInteger rxBytes;
@property (nonatomic) BOOL cellular;
@property (nonatomic) NSUInteger connectedMs;
@property (nonatomic) NSUInteger blockedMs;
@property (nonatomic, copy) NSString *hostAddress;
@property (nonatomic) NSUInteger hostPort;
@property (nonatomic) BOOL viaProxy;
@property (nonatomic) SPDYProxyStatus proxyStatus;

- (NSDictionary *)dictionary;

+ (void)setMetadata:(SPDYMetadata *)metadata forAssociatedDictionary:(NSMutableDictionary *)dictionary;
+ (SPDYMetadata *)metadataForAssociatedDictionary:(NSDictionary *)dictionary;

@end

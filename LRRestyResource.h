//
//  LRRestyResource.h
//  LRResty
//
//  Created by Luke Redpath on 06/08/2010.
//  Copyright 2010 LJR Software Limited. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "LRRestyClient.h"
#import "LRRestyResourceDelegate.h"

@interface LRRestyResource : NSObject <LRRestyClientDelegate> {
  LRRestyResource *parentResource;
  LRRestyClient *restClient;
  NSURL *URL;
  id<LRRestyResourceDelegate> delegate;
}
@property (nonatomic, assign) id<LRRestyResourceDelegate> delegate;

- (id)initWithRestClient:(LRRestyClient *)theClient URL:(NSURL *)aURL;
- (id)initWithRestClient:(LRRestyClient *)theClient URL:(NSURL *)aURL parent:(LRRestyResource *)parent;
- (LRRestyResource *)at:(NSString *)path;
- (void)get:(LRRestyResponseBlock)responseBlock;
@end
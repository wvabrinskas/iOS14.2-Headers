/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:42 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ProactiveInputPredictions.framework/ProactiveInputPredictions
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSCache, NSObject;

@interface PSGWordBoundaryFSTGrammar : NSObject {

	NSCache* _lmWrapperCache;
	NSObject*<OS_dispatch_queue> _lmWrapperQueue;

}
+(id)sharedInstance;
-(id)init;
-(id)triggerAttributesForContext:(id)arg1 localeIdentifier:(id)arg2 ;
-(void)clearLMCache;
-(void*)_createLexicon:(id)arg1 ;
-(id)_getLMWrapper:(id)arg1 ;
-(void)warmUpForLocaleIdentifier:(id)arg1 ;
-(void*)_createLanguageModel:(id)arg1 ;
-(id)_getPrimingToken:(void*)arg1 transientTokenID:(unsigned)arg2 ;
@end


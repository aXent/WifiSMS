/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@class DADSearchQuery;



@interface ASSearchTask : ASTask 
{
    DADSearchQuery *_query;
}

@property(readonly) DADSearchQuery *query; /* unknown property attribute: V_query */


- (id)initWithQuery:(id)arg1;
- (void)dealloc;
- (NSInteger)commandCode;
- (NSInteger)taskStatusForExchangeStatus:(NSInteger)arg1;
- (id)description;
- (id)query;

@end
